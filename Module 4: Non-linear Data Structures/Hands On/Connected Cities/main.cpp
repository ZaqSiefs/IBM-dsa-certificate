//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include <iostream>
#include <string.h>
using namespace std;

class Node {
public:
    int mVertex{};
    int mWeight{};
    Node* mNext{};
};


void Create(Node* head[]) {
    int nOfRoads{};
    std::cout << "Enter the no. of connecting (one-way) roads:";
    std::cin >> nOfRoads;
    std::cout << "\n";

    for(int i = 0; i < nOfRoads; i++) {
        int startNode{}, endNode{};
        std::cout << "Enter the start node (city) and end node (city) in the connection " << i + 1 << ":";
        std::cin >> startNode;
        std::cin >> endNode;

        int weight{};
        std::cout << "Enter the distance (weight):";
        std::cin >> weight;

        Node* newNode = new Node();
        newNode->mVertex = endNode;
        newNode->mWeight = weight;

        Node* temp = head[startNode];
        if(temp == NULL)
            head[startNode] = newNode;
        else{
            while(temp->mNext != NULL)
                temp = temp->mNext;
            temp->mNext = newNode;
        }
    }
}

void Display(Node* city[], int n){
    Node* max = new Node();
    max->mWeight = 0;
    max->mVertex = 0;
    max->mNext = 0;
    std::cout << "The distance between the connecting cities are:\n";
    for(int i = 0; i < n; i++) {
        if(!city[i])
            std::cout << i << " - No connecting roads found\n";
        else{
            Node* temp = city[i];
            while(temp != 0){
                std::cout << i << " -> " << temp->mVertex << " Distance: " << temp->mWeight << "\n";
                if(max->mWeight < temp->mWeight) {
                    max->mVertex = i;
                    max->mWeight = city[i]->mWeight;
                }
                temp = temp->mNext;
            }
        }
    }
    std::cout << "\n";
    if(max->mWeight == 0)
        std::cout << "No city has any connecting road.\n";
    else
        std::cout << max->mVertex << " is the city with the highest connecting roads.\n";
}

int main(){
    int nOfCities{};
    std::cout << "Enter the no. of cities:";
    std::cin >> nOfCities;

    Node* city[50];
    for(int i = 0; i < nOfCities; i++)
        city[i] = 0;

    Create(city);
    Display(city, nOfCities);
    return 0;
}