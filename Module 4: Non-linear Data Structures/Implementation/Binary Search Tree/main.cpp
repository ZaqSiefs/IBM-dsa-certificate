#include "BST.hpp"

void allPrint(BST::Tree* b) {
    std::cout << "Bst{\n";
    b->PrintPreOrder();
    b->PrintInOrder();
    b->PrintInReverseOrder();
    std::cout << "}\n\n";
    
}

void insert(BST::Tree* b, int data) {
    std::cout << "Inserting: " << data << "\n";
    b->Insert(data);
    allPrint(b);
}

void remove(BST::Tree* b, int key) {
    std::cout << "Deleting: " << key << "\n";
    b->Delete(key);
    allPrint(b);
}

void allStats(BST::Tree* b) {
    std::cout << "Stats{" << "\n";
    b->PrintSize();
    b->PrintMax();
    b->PrintMin();
    b->PrintMedian();
    b->PrintMean();
    b->PrintMode();
    b->PrintSum();
    std::cout << "}\n\n";
}

int main() {
    BST::Tree b(34);
    std::cout << "Initial ";
    allPrint(&b);
    insert(&b,22);
    remove(&b, 34);
    remove(&b, 22);
    insert(&b, 44);
    insert(&b, 44);
    insert(&b, 12);
    insert(&b, 12);
    insert(&b, 0);
    insert(&b, -9);
    insert(&b, 22);
    allStats(&b);
}
