#include <iostream>
#include <string_view>
#include <assert.h>

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node *head, *tail;

    Node* getNewNode(int data) {
        Node* newNode = new Node;
        if(newNode == NULL) {
            std::cout << "ERROR: Not enough memory to allocate for Node.\n";
        } else {
            newNode->data = data;
            newNode->next = NULL;  
        }     
        return newNode;
    }

public:

    LinkedList(int data) {
        Node* initialNode = getNewNode(data);
        head = initialNode;
        tail = initialNode;
    }

    ~LinkedList() {
        delete(head);
    }

    void PushToHead(int data) {
        Node* newNode = getNewNode(data);
        if(newNode == NULL) return;

        newNode->next = head;
        head = newNode;
    }

    void PushToTail(int data) {
        Node* newNode = getNewNode(data);
        if(newNode == NULL) return;

        tail->next = newNode;
        tail = newNode;
    }

    void Insert(int data, int position) {
        // Implementation treats any position <= 0 as 0, and any position >= tail as pushing to tail.
        if(position < 1) {
            PushToHead(data);
            return;
        }

        Node* newNode = getNewNode(data);
        if(newNode == NULL) return;
        Node* nodeBeforeNewNode = head;

        for(int i = 0; i < position - 1; i++) {
            if(nodeBeforeNewNode->next == NULL) {
                PushToTail(data);
                return;
            }
            nodeBeforeNewNode = nodeBeforeNewNode->next;
        }

        newNode->next = nodeBeforeNewNode->next;
        nodeBeforeNewNode->next = newNode;
    }

    void DeleteHead() {
        assert(head->next != NULL);
        Node* delNode = head;
        head = delNode->next;
        delete delNode;
    }

    void DeleteTail() {
        assert(head->next != NULL);
        Node *temp = head, *delNode = head;
        while(delNode->next != NULL) {
            temp = delNode;
            delNode = delNode->next;
        }
        temp->next = NULL;
        delete delNode;
    }

    void Delete(int position) {
        assert(head->next != NULL);

        Node* delNode = head;
        if(position < 1) {
            head = head->next;
            delete(delNode);
            return;
        }

        if(position == 1) {
            delNode = head->next;
            head->next = delNode->next;
            delete(delNode);
            return;
        }

        Node* nodeBeforeDelNode;
        for(int i = 0; i < position; i++) {
            if(delNode->next == NULL) break;
            nodeBeforeDelNode = delNode;
            delNode = delNode->next;
        }
        nodeBeforeDelNode->next = delNode->next;
        delete(delNode);
    }

    int Search(int position) {
        assert(0 <= position);
        if(head->next == NULL || position == 0) return head->data;
        Node* trav = head;
        for(int i = 0; i < position; i++) {
            if (trav->next == NULL) {
                std::cout << "WARNING: Out of bounds - Returning last item: ";
                break;
            }
            trav = trav->next;
        }
        return trav->data;
    }    

    size_t Size() {
        size_t size = 1;
        Node* trav = head;
        while(trav->next != NULL) {
            trav = trav->next;
            size++;
        }
        return size;
    }

    bool Contains(int comp) {
        Node* trav = head;
        while(trav != NULL) {
            if(trav->data == comp) return true;
            trav = trav->next;
        }
        return false;
    }

    void Print() {
        Node* nav = head;
        std::cout << "~List: {";
        while(nav != NULL) {
            std::cout << nav->data;
            if(nav->next != NULL) std::cout << ", ";
            nav = nav->next;
        }
        std::cout << "}\n";
    }
};

std::string_view ToFtoString (bool ToF) {
    if(ToF == 1) return "True";
    return "False";
}


int main() {
    LinkedList L(0);
    L.Print();
    std::cout << "\nSIZE OF LIST: " << L.Size() << "\n";
    std::cout << "INSERTING:\n";
    L.PushToHead(20);
    L.PushToHead(50);
    L.PushToHead(70);
    L.PushToHead(100);
    L.PushToTail(3);
    L.PushToTail(2);
    L.PushToTail(1);
    L.Insert(0, 0);
    L.Insert(-20, -20);
    L.Insert(1, 1);
    L.Insert(4, 4);
    L.Insert(200, 200);
    std::cout << "\nSIZE OF LIST: " << L.Size() << "\n";
    std::cout << "\nDELETING:\n";
    L.Delete(-10);
    L.Delete(1);
    L.Delete(4);
    L.Delete(100);
    L.DeleteHead();
    L.DeleteTail();
    std::cout << "\nData at index 5 = " << L.Search(5) << "\n";
    std::cout << "\nSIZE OF LIST: " << L.Size() << "\n";
    std::cout << "\nLIST CONTAINS 70: " << ToFtoString(L.Contains(70)) << "\n";
    std::cout << "\nLIST CONTAINS 40: " << ToFtoString(L.Contains(40)) << "\n";
    
}