//
//  main.cpp
//  MaxSubArraySumFirstProblem
//
//  Created by princeraj on 29/11/20.
//

#include <iostream>


void SubArraySum(int arr[],int size){
    
    int current_sum=0;
    int max_sum=-10000000;
    
    for (int i=0;i<size; i++) {
        
        current_sum=current_sum+arr[i];
        
        if(current_sum>max_sum){
            max_sum=current_sum;
        }
    }
    
    
    printf("%d\n",max_sum);
    
    
    
}



int main()

{
    int arr[]={ 2,-1,-5,-8,-45};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    SubArraySum(arr,size);
    
}
