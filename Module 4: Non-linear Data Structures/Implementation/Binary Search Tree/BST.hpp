#ifndef BST_hpp
#define BST_hpp

#include <stack>
#include <vector>
#include <iostream>

namespace BST {
class Tree {
private:
    class Node {
    public:
        Node(int);
        int mData;
        int mN;
        Node *pLeft, *pRight;
    };
    
public:
    Tree(int);
    ~Tree();
    void Insert(int);
    void Delete(int);
    void Reset(int);
    bool Search(int);
    int GetMax();
    int GetMin();
    int* GetMode();
    double GetMedian();
    double GetMean();
    int GetSize();
    int GetSum();
    
    void PrintInOrder();
    void PrintInReverseOrder();
    void PrintPreOrder();
    void PrintMax();
    void PrintMin();
    void PrintMedian();
    void PrintMean();
    void PrintMode();
    void PrintSize();
    void PrintSum();
private:
    Tree::Node* getNewNode(int);
    Tree::Node* mRoot;
    
    int mMax;
    int mMin;
    int* pMode;
    int mMode;
    int mNofModes;
    int mSize;
};
}
#endif
