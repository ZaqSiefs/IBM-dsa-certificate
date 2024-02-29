#include <iostream>
#include <string.h>

const int MAX_VERTICES {50};

bool checkInput() {
    if (!std::cin) {
        if (std::cin.eof()) 
            exit(0); 
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        return 0;
    }
    return 1;
}

class AdjacencyList {
private:
    class Node {
    public:
        Node(int, int);
        int mVertex;
        int mWeight;
        Node* pNext;
    };

public:
    AdjacencyList();
    void Create();
    void Display();
private:
    Node* NewNode(int, int);
    bool CheckGraph(int, int);
    void UpdateGraph(int, int, int);
    bool GetGraphType();
    int GetNumberOfEdges();
    int GetNode();
    int GetWeight();
    int size;
    bool mGraphType;
    int mLargestVertex;
    AdjacencyList::Node* pHead[MAX_VERTICES];
};

AdjacencyList::Node::Node(int vertex, int weight) {
    mVertex = vertex;
    mWeight = weight;
    Node* pNext = NULL;
}

AdjacencyList::AdjacencyList() {
    memset(pHead, 0, MAX_VERTICES * sizeof(*pHead));
    mGraphType = GetGraphType();
    size = 0;
}

void AdjacencyList::Create() {
    int nOfEdges = GetNumberOfEdges();

    for(int i = 0; i < nOfEdges; i++) {
        int nodeStart{}, nodeEnd{};
        while (true) {
            std::cout << "--Starting Node--\n";
            nodeStart = GetNode();
            std::cout << "--Ending Node--\n";
            nodeEnd = GetNode();
            if(mGraphType == 0 && nodeStart == nodeEnd)
                std::cout << "Cannot loop Directed Graph.\n";
            else if(!(CheckGraph(nodeStart, nodeEnd) && CheckGraph(nodeEnd, nodeStart)))
                std::cout << "Edge already exists.\n";
            else 
                break;
            
        }
        std::cout << "--Weight of Node--\n";
        int weight = GetWeight();
        UpdateGraph(nodeStart, nodeEnd, weight);
        if(mLargestVertex < nodeStart)
            mLargestVertex = nodeStart;
        if(mLargestVertex < nodeEnd)
            mLargestVertex = nodeEnd;
    }
}

void AdjacencyList::Display() {
    std::cout << "--Adjacency List--\n";
    for(int i = 0; i < mLargestVertex + 1; i++) {
        if(pHead[i] != NULL) {
            std::cout << "Head[" << i << "]";
            Node* temp = pHead[i];
            while(temp != NULL) {
                std::cout << temp->mVertex << "=weight:" << temp->mWeight << "; ";
                temp = temp->pNext;
            }
            std::cout << "\n";
        }
    }
}

AdjacencyList::Node* AdjacencyList::NewNode(int vertex, int weight) {
    Node* newNode = new Node(vertex, weight);
    if(!newNode)
        std::cout << "Not enough memory for new node.\n";
    return newNode;
}

bool AdjacencyList::CheckGraph(int nodeStart, int nodeEnd) {
    Node* temp = pHead[nodeStart];
    while(temp != NULL) {
        if(temp->mVertex == nodeEnd)
            return 0;
        temp = temp->pNext;
    }
    return 1;
}

void AdjacencyList::UpdateGraph(int nodeStart, int nodeEnd, int weight) {
    Node* newNode = NewNode(nodeEnd, weight);
    Node* temp = pHead[nodeStart];
    if(!temp)
        pHead[nodeStart] = newNode;
    else {
        while(temp->pNext != NULL) 
            temp = temp->pNext;
        temp->pNext = newNode;
    }

    if(mGraphType == 1) {
        newNode = NewNode(nodeStart, weight);
        temp = pHead[nodeEnd];

        if(!temp)
            pHead[nodeEnd] = newNode;
        else {
            while(temp->pNext != NULL)
                temp = temp->pNext;
            temp->pNext = newNode;
        }
    }
}

bool AdjacencyList::GetGraphType() {
    std::cout << "--Select Graph Type--\n";
    bool choice{};
    while (true) {
        std::cout << "0 - Directed Graph\n";
        std::cout << "1 - Undirected Graph\n";
        std::cout << "Enter your choice (0 or 1): ";
        std::cin >> choice;
        if(checkInput() && (choice == 0 || choice == 1))
            return choice;
        std::cout << "Invalid input.\n";
    }
}

int AdjacencyList::GetNumberOfEdges() {
    while (true) {
        int nOfEdges{};
        std::cout << "Enter the number of edges: ";
        std::cin >> nOfEdges;
        if(checkInput() && 0 < nOfEdges)
            return nOfEdges;
        std::cout << "Invalid input.\n";
    }
}

int AdjacencyList::GetNode() {
    while (true) {
        int node{};
        std::cout << "Enter node number: ";
        std::cin >> node;
        if(checkInput() && 0 <= node && node < MAX_VERTICES)
            return node;
        std::cout << "Invalid input.\n";
    }
}

int AdjacencyList::GetWeight() {
    while (true) {
        int weight{};
        std::cout << "Enter Weight: ";
        std::cin >> weight;
        if(checkInput())
            return weight;
        std::cout << "Invalid input.\n";
    }
}

int main() {
    AdjacencyList l;
    int size{32};
    l.Create();
    l.Display();
}
