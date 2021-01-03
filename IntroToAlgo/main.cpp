//
//  main.cpp
//  IntroToAlgo
//
//  Created by princeraj on 19/12/20.
//

#include <iostream>


void insertionSort(int arr[],int n){
    
    int j;
    int i;
    int key;
    for(j=1;j<n;j++){
        key=arr[j];
        i=j-1;
        while (i>=0 && arr[i]>key) {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
}

int main() {
   
    int arr[]={7,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    
    for (int j=0; j<n; j++)
    printf("%d\t",arr[j]);
   

}
