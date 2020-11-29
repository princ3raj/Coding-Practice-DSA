//
//  main.cpp
//  MoveAllTheNegativeElements
//
//  Created by princeraj on 29/11/20.
//

#include <iostream>


void MoveAllNegative(int arr[],int size){
    
    int j=0;
    for (int i=0; i<size; i++) {
        
        if(arr[i]<0)
        {
            if (i!=j) {
                
                std::swap(arr[i],arr[j]);
               
                
            }
            j++;
          
        }
    }
    
    
    
    
    
    
    
}

int main() {
    int size=8;
    int arr[]={-1,3,-5,7,-9,-12,11,-11};
    MoveAllNegative(arr,size);
    for(int i=0;i<size;i++)
    printf("%d\n",arr[i]);
  
}
