#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
};

class BST {
public:
    Node* root;
    BST() {root = NULL;}
    Node* insert(Node*, int);
    int search(int);
};

Node* BST::insert(Node* root, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    if(root == NULL) 
        root = newNode;
    else if(value >= root->data)
        root->right = insert(root->right, value);
    else 
        root->left = insert(root->left, value);
    return root;
}

int BST::search(int searchKey) {
    Node* temp = root;
    while(temp != NULL) {
        if(temp->data == searchKey)
            return searchKey;
        else if(temp->data > searchKey)
            temp = temp->left;
        else
            temp = temp->right;
    }

    return -1;
}

int main() {
    BST tree;
    string ch = "yes";
    int num{}, searchKey{};
    cout << "Enter the key number:\n";
    cin >> num;

    tree.root = tree.insert(tree.root, num);
    do {
        cout << "Do you want to create another junction(yes/no)?\n";
        cin >> ch;
        if(ch.compare("yes") == 0) {
            cout << "\nEnter the key number:\n";
            cin >> num;
            tree.root = tree.insert(tree.root, num);
        }
        else
            break;
    } while(true);

    cout << "\nEnter the key to be searched:\n";
    cin >> searchKey;
    int flag = tree.search(searchKey);
    cout << "\n" << searchKey;
    if(flag != searchKey)
        cout << " not";
    cout << " found\n";

    return 0;
}