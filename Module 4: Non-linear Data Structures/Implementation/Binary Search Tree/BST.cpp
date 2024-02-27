#include "BST.hpp"

namespace BST {
Tree::Node::Node(int data)
{
    mData = data;
    mN = 0;
    pLeft = 0;
    pRight = 0;
}

Tree::Tree(int data) {
    mRoot = Tree::getNewNode(data);
    pMode = 0;
    mMode = 1;
    mNofModes = -1;
    mMax = mMin = data;
    mSize = 1;
}

Tree::~Tree()
{
    delete(pMode);
    
    std::stack<Tree::Node*> s {};
    Tree::Node* current {mRoot};
    Tree::Node* delNode {};
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        s.pop();
        delNode = current;
        current = current->pRight;
        if(!delNode)
            delete(delNode);
    }
}

void Tree::Insert(int data) {
    Tree::Node* newNode {new Tree::Node(data)};
    Tree::Node* current {mRoot};
    Tree::Node* prev {};
    
    while(current != 0) {
        prev = current;
        if(data < current->mData)
            current = current->pLeft;
        else if(data > current->mData)
            current = current->pRight;
        else {
            prev->mN++;
            mSize++;
            return;
        }
    }
    
    if(data < prev->mData)
        prev->pLeft = newNode;
    else
        prev->pRight = newNode;
    mSize++;
    
    if(data < mMin)
        mMin = data;
    if(data > mMax)
        mMax = data;
}

void Tree::Delete(int key) {
    Tree::Node* current = mRoot;
    Tree::Node* prev = 0;
    
    if(current->pLeft == 0 && current->pRight == 0 && current->mN == 0) {
        std::cout << "Cannot delete only item in Tree. Please use Replace() function.\n";
        return;
    }
    
    while(current != NULL && current->mData != key) {
        prev = current;
        if (key < current->mData)
            current = current->pLeft;
        else
            current = current->pRight;
    }
    
    if(current == NULL) {
        std::cout << "Key " << key << " not found in BST.\n";
        return;
    }
    
    if(current->mN > 0) {
        current->mN--;
        mSize--;
        return;
    }
    
    if(current->pLeft == NULL || current->pRight == NULL) {
        Tree::Node* replace;
        
        if(current->pLeft == NULL)
            replace = current->pRight;
        else
            replace = current->pLeft;
        
        if (prev == NULL){
            delete mRoot;
            mRoot = replace;
            mSize--;
            return;
        }
        
        if (current == prev->pLeft)
            prev->pLeft = replace;
        else
            prev->pRight = replace;
        
        delete current;
        mSize--;
    }
    
    else {
        Tree::Node* p = 0;
        Tree::Node* temp;
        
        temp = current->pRight;
        while (temp->pLeft != NULL) {
            p = temp;
            temp = temp->pLeft;
        }
        
        if (p != NULL)
            p->pLeft = temp->pRight;
        else
            current->pRight = temp->pRight;
        
        current->mData = temp->mData;
        
        delete temp;
        mSize--;
    }
    
}

void Tree::Reset(int data) {
    std::stack<Tree::Node*> s {};
    Tree::Node* current {mRoot};
    Tree::Node* delNode {};
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        s.pop();
        delNode = current;
        current = current->pRight;
        if(delNode != NULL)
            delete(delNode);
    }
    Tree::Node* newNode = Tree::getNewNode(data);
    mRoot = newNode;
}

bool Tree::Search(int key) {
    std::stack<Tree::Node*> s {};
    Tree::Node* current {mRoot};
    Tree::Node* delNode {};
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            if(current->mData == key) {
                return true;
            }
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        s.pop();
        delNode = current;
        current = current->pRight;
    }
    return false;
}

int Tree::GetMax() {
    return mMax;
}

int Tree::GetMin() {
    return mMin;
}

int* Tree::GetMode() {
    if(pMode != 0)
        return pMode;
    
    std::stack<Tree::Node*> s {};
    int size {Tree::GetSize()};
    int* array{new int[size * 2]};
    Tree::Node* current {mRoot};
    int mode {}, modeItems {};
    
    while(current != NULL || s.empty() == false) {
        while(current != NULL) {
            s.push(current);
            if(current->mN > mode) {
                memset(array, 0, sizeof(*array));
                modeItems = 0;
            }
            if(current->mN >= mode) {
                array[(modeItems * sizeof(int) * 2)] = current->mData;
                array[(modeItems * sizeof(int) * 2) + sizeof(int)] = current->mN;
                mode = current->mN;
                modeItems++;
                mode = current->mN;
            }
            current = current->pLeft;
        }
        current = s.top();
        s.pop();
        current = current->pRight;
    }
    
    if(mode == 0) {
        delete[] array;
        array = NULL;
    }
    
    mNofModes = modeItems;
    mMode = ++mode;
    return array;
}

double Tree::GetMedian() {
    int size = Tree::GetSize();
    if(size == 1)
        return mRoot->mData;
    
    std::stack<Tree::Node*> s{};
    Tree::Node* current{mRoot};
    double median{};
    int n{};
    int array[size];
    
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        for(int i = 0; i <= current->mN; i++)
            array[n++] = current->mData;
        s.pop();
        current = current->pRight;
    }
    
    median = (double) array[size / 2];
    if(size % 2 == 0)
        median = (median + (double) array[(size / 2) - 1]) / 2;
    
    return median;
}

double Tree::GetMean() {
    if(mSize == 1)
        return mRoot->mData;
    
    std::stack<Tree::Node*> s{};
    Tree::Node* current{mRoot};
    int total{};
    
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        for(int i = 0; i <= current->mN; i++)
            total += current->mData;
        s.pop();
        current = current->pRight;
    }
    
    return (double) total / mSize;
}

int Tree::GetSize() {
    return mSize;
}

int Tree::GetSum() {
    std::stack<Tree::Node*> s{};
    Tree::Node* current{mRoot};
    int sum{};
    
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        for(int i = 0; i <= current->mN; i++)
            sum += current->mData;
        s.pop();
        current = current->pRight;
    }
    
    return sum;
}

void Tree::PrintInOrder() {
    std::stack<Tree::Node*> s {};
    Tree::Node* current {mRoot};
    
    std::cout << "In order: ";
    while (current != NULL || s.empty() == false) {
        while (current != NULL) {
            s.push(current);
            current = current->pLeft;
        }
        current = s.top();
        s.pop();
        for(size_t i = 0; i <= current->mN; i++)
            std::cout << current->mData << " ";
        current = current->pRight;
    }
    std::cout << "\n";
}

void Tree::PrintInReverseOrder() {
    std::stack<Tree::Node*> s {};
    Tree::Node* current {mRoot};
    
    std::cout << "In reverse order: ";
    while(current!= NULL || s.empty() == false) {
        while(current != NULL) {
            s.push(current);
            current = current->pRight;
        }
        current = s.top();
        s.pop();
        for(size_t i = 0; i <= current->mN; i++)
            std::cout << current->mData << " ";
        current = current->pLeft;
    }
    std::cout << "\n";
}

void Tree::PrintPreOrder() {
    std::stack<Tree::Node*> s {};
    s.push(mRoot);
    
    std::cout << "In pre-order: ";
    while(s.empty() == false) {
        Tree::Node* node = s.top();
        for(int i = 0; i <= s.top()->mN; i++)
            std::cout << node->mData << " ";
        s.pop();
        
        if (node->pRight)
            s.push(node->pRight);
        if (node->pLeft)
            s.push(node->pLeft);
    }
    std::cout << "\n";
}

void Tree::PrintMax() {
    std::cout << "Max: " << mMax << "\n";
}

void Tree::PrintMin() {
    std::cout << "Min: " << mMin << "\n";
}

void Tree::PrintSize() {
    std::cout << "Size: " << mSize << "\n";
}

void Tree::PrintMode() {
    if(mNofModes == -1)
        pMode = Tree::GetMode();
    
    if(mNofModes == 1)
        std::cout << "Mode: " << *pMode << " ";
    else {
        std::cout << "Modes: ";
        for(int i = 0; i < mNofModes; i++)
            std::cout << *(pMode + (i * sizeof(int) * 2)) << " ";
    }
    std::cout << "(" << mMode << ")\n";
}

void Tree::PrintMedian() {
    std::cout << "Median: " << Tree::GetMedian() << "\n";
}

void Tree::PrintMean() {
    std::cout << "Mean: " << Tree::GetMean() << "\n";
}

void Tree::PrintSum() {
    std::cout << "Sum: " << Tree::GetSum() << "\n";
}

Tree::Node* Tree::getNewNode(int data) {
    Tree::Node* newNode {new Tree::Node(data)};
    if(!newNode)
        std::cout << "Not enough memory for new Node.\n";
    return newNode;
}}


