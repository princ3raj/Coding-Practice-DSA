//
//  main.cpp
//  UnionAndInteresection
//
//  Created by princeraj on 29/11/20.
//

#include <iostream>
#include <iterator>
#include <set>
using namespace std;



// Function to remove duplicate elements
void removeDuplicates(int arr[], int n)
{
  
    int i;
  
    // Initialise a set
    // to store the array values
    set<int> s;
  
    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {
  
        // insert into set
        s.insert(arr[i]);
    }
  
    set<int>::iterator it;
  
    // Print the array with duplicates removed
    cout << "\nAfter removing duplicates:\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << ", ";
    cout << '\n';
}


void Union(int arrA[],int arrB[],int array_A_size,int array_B_size){
    
    int totalsize=array_A_size+array_B_size;
    
    int j=0;
    
    int mainArray[totalsize];
    
    
    for (int i=0; i<totalsize; i++) {
        
        if( i<array_A_size){
            
            mainArray[i]=arrA[i];
            
        }
        
        if (i>=array_A_size && j<array_B_size) {
            mainArray[i]=arrB[j];
            j++;
        }
        
       
        
    }
    
    
    removeDuplicates(mainArray, totalsize);
    
     
    

    
    
    
}

int main() {
    
    
    int array_A_size;
    int array_B_size;
    
    cin>>array_A_size;
    cin>>array_B_size;
    
    int arrayA[array_A_size];
    int arrayB[array_B_size];
    
    
    for (auto &x:arrayA) {
        cin>>x;
    }
    
    
    for (auto &x:arrayB) {
        cin>>x;
    }
    
    
    Union(arrayA, arrayB,array_A_size,array_B_size);
    

}
