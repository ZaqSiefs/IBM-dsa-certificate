#include <iostream>

int binarySearch(int array[], int size, int key) {
    int first {}, last = size - 1, mid{};
    std::cout << "\nMid scores: ";
    while(first <= last) {
        mid = (first + last) /2;
        std::cout << array[mid] << " ";

        if(array[mid] == key) 
            return mid + 1;
        else if (array[mid < key])
            first = mid + 1;
        else 
            last = mid - 1;
    }
    return 0;
}

int main() {
    std::cout << "Enter the number of teams: ";
    int no{};
    std::cin >> no;
    int teams[no];
    std::cout << "Enter the score:\n";
    for(int i = 0; i < no; i++)
        std::cin >> teams[i];
    std::cout << "Enter the score to be searched: ";
    int score{};
    std::cin >> score;
    int result = binarySearch(teams, no, score);
    if(result == 0) 
        std::cout << "\nScore not found";
    else
        std::cout << "\nScore found for the team " << result << "\n";
}