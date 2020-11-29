

#include<iostream>
using namespace std;

 int getMinDiff(int arr[], int n, int k) {
       
     int diff=0;

       
       
       for(int i=0;i<n;i++){
        
       if(arr[i]-k<=0){
           arr[i]=arr[i]+k+k;
       }
       
       if(arr[i]-k>0){
           arr[i]=arr[i]-k;
       }
       
        
           
           diff=arr[n-1]-arr[0];
           
           
        
        

   }
     
     return diff;
 }
    
    
    
    
    
    int main()
    
    {
        int k;
        cin>>k;
        int n;
        cin>>n;
        
        int arr[n];
        for (auto &x:arr) {
            cin>>x;
        }
        
        
        
        
       int diff=getMinDiff(arr, n,k);
        
        printf("%d\n",diff);
        
        printf("printed array\n");
        
        for (int i=0; i<n; i++) {
            printf("%d\n",arr[i]);
        }
        
        
        
    }
    
    
