//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include<iostream>
#include<vector>
using namespace std;

void DFS(std::vector<vector<int>> &matrix, int i, int j, int rows, int columns) {
    if (i < 0 || j < 0 || i > (rows - 1) 
    || j > (columns - 1) || matrix[i][j] != 1)
        return;
    
    if (matrix[i][j] == 1) {
        matrix[i][j] = 0;
        DFS(matrix, i + 1, j, rows, columns);       // right side traversal
        DFS(matrix, i -1, j, rows, columns);        // left side traversal
        DFS(matrix, i, j + 1, rows, columns);       // upward side traversal
        DFS(matrix, i, j - 1, rows, columns);       // downward side traversal
        DFS(matrix, i + 1, j + 1, rows, columns);   // up-right side traversal
        DFS(matrix, i - 1, j + 1, rows, columns);   // up-left side traversal
        DFS(matrix, i + 1, j - 1, rows, columns);   // down-right side traversal
        DFS(matrix, i - 1, j - 1, rows, columns);   // down-left side traversal
    }
}

int countIslands(std::vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();
    int count{};
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if(matrix[i][j] == 1) {
                count++;
                DFS(matrix, i, j, rows, columns);
            }
        }
    }
    return count;
}

int main(){
    int rows{};
    std::cout << "Enter the number of rows:\n";
    std::cin >> rows;

    int columns{};
    std::cout << "Enter the number of columns:\n";
    std::cin >> columns;

    if(rows < 1 || columns < 1) 
        std::cout << "Invalid input\n";
    else {
        std::vector<std::vector<int>> matrix;
        std::cout << "Enter the matrix:\n";
        for(int i = 0; i < rows; i++) {
            std::vector<int> v1;
            for(int j = 0; j < columns; j++) {
                int input{};
                std::cin >> input;
                v1.push_back(input);
            }
            matrix.push_back(v1);
        }
        
        std::cout << "Number of connected objects = " << countIslands(matrix) << "\n";
    }
    return 0;
}
   

