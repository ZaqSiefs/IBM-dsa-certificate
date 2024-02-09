////PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>

void runAverageScore() {
    int nOfAssignments{};
    std::cout << "Enter no. of assignments:\n";
    std::cin >> nOfAssignments;
    if(!(nOfAssignments <= 10)) {
        std::cout << "No. of assignments must not be more than 10\n";
        return;
    } 

    int assignmentScores[nOfAssignments];

    std::cout << "Enter the scores:\n";
    for(int i = 0; i < nOfAssignments; i++) {
        std::cin >> assignmentScores[i];
    }

    int sum{};
    for(int i = 0; i < nOfAssignments; i++) {
        sum += assignmentScores[i];
    }

    float averageScore = (float)sum / (float)nOfAssignments;
    std::cout << "The average score is " << averageScore << "\n";
    
    if(averageScore < 80.0f) {
        std::cout << "Not eligible for projects\n";
        return;
    }

    std::cout << "Eligible for projects\n";
}


int main(){   //DO NOT change the 'main()' signature
    
    //Write your code here
    
    runAverageScore();
    return 0;

}
