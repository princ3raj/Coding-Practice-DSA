// Iterative C++ program to reverse an array
#include <iostream>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(char arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility function to print an array */
void printArray(char arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
    
    int userSpecifiedSize;
    cout<<"Enter Array Size\n";
    cin>>userSpecifiedSize;
    
    
    char arr[userSpecifiedSize];
    
    for(int i=0;i<userSpecifiedSize;i++){
        
        cin >>arr[i];
    }
    
    
    
    int n = userSpecifiedSize;

    // To print original array
    printArray(arr, n);
    
    // Function calling
    rvereseArray(arr, 0, n-1);
    
    cout << "Reversed array is" << endl;
    
    // To print the Reversed array
    printArray(arr, n);
    
    return 0;
}

