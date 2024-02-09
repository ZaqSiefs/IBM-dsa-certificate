#include <iostream>

int getNoOfBoxes() {
    int nOfBoxes = 0;
    std::cout << "Enter the no. of boxes: ";
    std::cin >> nOfBoxes;
    return nOfBoxes;
}

void chocolateBoxes() {
    int nOfBoxes = getNoOfBoxes();
    int boxes[nOfBoxes];
    int flag = 0;
    if(0 < nOfBoxes && nOfBoxes <= 10) {
        for(int i = 0; i < nOfBoxes; i++) {
            std::cout << "Enter the no. of chocolates in box " << i + 1 << ": ";
            std::cin >> boxes[i];
            if(i == 0 && (boxes[i] <= 0 || boxes[i] % 2 != 0)) {
                std::cout << "Sorry!!! The first box always should contain positive even no. of chocolates\n";
                return;
            } else {
                if(boxes[i] % 2 == 0) {
                    flag++;
                }
            }
        }
        std::cout << "\nNo. of chocolates in each box: ";
        for(int i = flag - 1; i < nOfBoxes; i++) {
            std::cout << boxes[i] << " ";
        }  

    } else {
        std::cout << "Invalid Input\n";
        return;
    }
}

int main() 
{
    chocolateBoxes();
    return 0;
}