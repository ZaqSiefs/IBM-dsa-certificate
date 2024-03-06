//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;
 
void merge(int *arr, int low, int high, int mid){
	//Write your code here
	int subArrayOne = mid - low + 1;
    int subArrayTwo = high - mid;

    int* lowArray = new int[subArrayOne];
    int* highArray = new int[subArrayTwo];

    for(int i = 0; i < subArrayOne; i++) 
        lowArray[i] = arr[low + i];
    for(int i = 0; i < subArrayTwo; i++) 
        highArray[i] = arr[mid + 1 + i];
    
    int iOfSubArrayOne{}, iOfSubArrayTwo{}, iOfMergedArray{low};

    while(iOfSubArrayOne < subArrayOne && iOfSubArrayTwo < subArrayTwo) {
        if(lowArray[iOfSubArrayOne] <= highArray[iOfSubArrayTwo])
            arr[iOfMergedArray++] = lowArray[iOfSubArrayOne++];
        else    
            arr[iOfMergedArray++] = highArray[iOfSubArrayTwo++];
    }

    while(iOfSubArrayOne < subArrayOne)
        arr[iOfMergedArray++] = lowArray[iOfSubArrayOne++];
    
    while(iOfSubArrayTwo < subArrayTwo)
        arr[iOfMergedArray++] = highArray[iOfSubArrayTwo++];
    
    delete[] lowArray;
    delete[] highArray;
}
 

void mergeSort(int *arr, int low, int high){
	int mid{};
	if (low < high)
	{
		mid=(low+high)/2;
		//Split the data into two half.
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);
 
		// Merge them to get sorted output.
		merge(arr, low, high, mid);
	}
}
 
int main()
{
	int n;
	cout<<"Enter the size of an array:";
	cin>>n;
    if(n>0){
	    int arr[n];
	    cout<<"Enter the elements:";
	    for(int i = 0; i < n; i++){
		    cin>>arr[i];
	    }
	    
        std::cout << "Given array is\n";
        for(int i = 0; i < n; i++)
            std::cout << arr[i] << " ";
        std::cout << "\n\n";

    	mergeSort(arr, 0, n-1);
    	
    	std::cout << "The sorted array is\n";
        for(int i = 0; i < n; i++)
            std::cout << arr[i] << " ";
        std::cout << "\n";
	   
    }
    else {
         //Write your code here for invalid array size.
        std::cout << "Invalid array size\n";
    }
 
	return 0;
}