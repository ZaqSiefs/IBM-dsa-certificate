#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int nOfUsers{};
    cout << "Enter the no. of users: ";
    cin >> nOfUsers;

    int nOfConnections{};
    cout << "Enter the no. of connections: ";
    cin >> nOfConnections;

    int matrix[nOfUsers][nOfUsers];
    memset(matrix, 0, sizeof(matrix));
    for(int i = 1; i <= nOfConnections; i++) {
        int startNode{}, endNode{};
        cout << "Enter the start node and end node in connection "  << i << ":\n";
        cin >> startNode;
        cin >> endNode;
        matrix[startNode - 1][endNode - 1] = endNode;
        matrix[endNode - 1][startNode -1] = startNode;
    }

    std::cout << "The representation of SocialNet users:\n";
    for(int i = 0; i < nOfUsers; i++) {
        for(int j = 0; j < nOfUsers; j++) 
            std::cout << matrix[i][j] << " ";
        std::cout << "\n";
    }
    
    std::cout << "The friends' list of all users:\n";
    for(int i = 0; i < nOfUsers; i++) {
        int isEmpty = true; 
        std::cout << i + 1 << "->";
        for(int j = 0; j < nOfUsers; j++) 
            if(matrix[i][j] != 0) {
                std::cout << matrix[i][j] << " ";
                isEmpty = false;
            }
        if(isEmpty)
            std::cout << 0;
        std::cout << '\n';
    }
   return 0; 
}

