#include <iostream>
#include <string.h>

constexpr int MAX_VERTICES = 5;

class AdjacencyMatrix {
public:
    AdjacencyMatrix();
    void AddEdge();
    void Display();
private:
    int pMatrix[MAX_VERTICES][MAX_VERTICES];
    int getVertex(int);
};

AdjacencyMatrix::AdjacencyMatrix() {
    memset(pMatrix, 0, sizeof(pMatrix));
}


void AdjacencyMatrix::AddEdge() {
int nOfEdges{};
    while(true) {
        std::cout << "Enter n of edges to insert (MAX: " << MAX_VERTICES << "): ";
        std::cin >> nOfEdges;
        if(0 < nOfEdges && nOfEdges < MAX_VERTICES)
            break;
        std::cout << "Invalid input.\n";
    }
int row{}, col{};
    for(int i = 0; i < nOfEdges; i++) {
        std::cout << "(Edge #" << i + 1 << ")\n";
        std::cout << "--Row--\n";
        row = getVertex(nOfEdges);
        std::cout << "--Column--\n";
        col = getVertex(nOfEdges);

        if(pMatrix[row][col] == 1 && pMatrix[col][row] == 1) {
            std::cout << "Edge already exists\n";
            i--;
        } else {
            pMatrix[row][col] = 1;
            pMatrix[col][row] = 1;
        }
    }
}

void AdjacencyMatrix::Display() {
    for(int row = 0; row < MAX_VERTICES; row++) {
        for(int col = 0; col < MAX_VERTICES; col++)
            std::cout << pMatrix[row][col] << " ";
        std::cout << "\n";
    }
}

int AdjacencyMatrix::getVertex(int nOfEdges) {
    int vertex;
    while (true) {
        std::cout << "Enter vertex: ";
        std::cin >> vertex;
        if(0 <= vertex && vertex < MAX_VERTICES)
            break;
        std::cout << "Invalid input.\n";
    }
    return vertex;
}

int main() {
    AdjacencyMatrix m;
    m.AddEdge();
    m.AddEdge();
    m.Display();
}

