//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
#include <stack>
using namespace std;
class Node {
    public:
    int data;
    Node *left, *right;
};

class BST {
	public :
	Node *root;
    BST() {
        root = NULL;
    }
    Node* insert(Node*, int);
    void preOrder(Node*);
    void inOrder(Node*);
    void postOrder(Node*);
};

Node* BST :: insert(Node* root, int value) { 
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = newNode->right = 0;
    
    if(!root) 
        root = newNode;        
    else {
        Node* temp = root;
        Node* prev;
        while(temp != 0) {
            prev = temp;
            if(value < temp->data) 
                temp = temp->left;
            else 
                temp = temp->right;
        }
        if(value < prev->data)
            prev->left = newNode;
        else    
            prev->right = newNode;
    }
    return root;
}

void BST :: preOrder(Node* root){
    std::stack<Node*> s{};
    s.push(root);
    while(s.empty() == false) {
        Node* node = s.top();
        cout << node->data << " ";
        s.pop();
        if (node->right)
            s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
}
  
void BST :: inOrder(Node* root) {
    std::stack<Node*> s{};
    Node* current{root};
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }
        current = s.top();
        s.pop();
        cout << current->data << " ";
        current = current->right;
    }
}


void BST :: postOrder(Node* root) {
    stack<Node*> s{};
    s.push(root);
    Node* prev{};
    while (!s.empty()) {
        Node* current = s.top();
        if (prev == NULL || prev->left == current || prev->right == current) {
            if (current->left)
                s.push(current->left);
            else if (current->right)
                s.push(current->right);
            else {
                s.pop();
                cout << current->data << " ";
            }
        } else if (current->left == prev) {
            if (current->right)
                s.push(current->right);
            else {
                s.pop();
                cout << current->data << " ";
            }
        } else if (current->right == prev) {
            s.pop();
            cout << current->data << " ";
        }
        prev = current;
    }
}

int main() {
	BST tree;
	string ch="yes";
	int num;
	do  {
		cout<<"Enter the element to be inserted in the tree\n";
		cin>>num;
		tree.root=tree.insert(tree.root, num);
		cout<<"Do you want to insert another element(yes/no)?\n";
		cin>>ch;
	}while(ch.compare("yes")==0);
	
	cout<<"Preorder Traversal : The elements in the tree are:\n";
	tree.preOrder(tree.root);
	cout<<"\n";
	cout<<"Inorder Traversal : The elements in the tree are:\n";
	tree.inOrder(tree.root);
	cout<<"\n";
    cout<<"Postorder Traversal : The elements in the tree are:\n";
	tree.postOrder(tree.root);
	cout<<"\n";
	return 0;
}



