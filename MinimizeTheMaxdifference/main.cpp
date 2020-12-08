

#include<iostream>
using namespace std;

class Solution{
public:
    
    int getMinDiff(int arr[], int n, int k) {
          
        int diff=0;

          
          
          for(int i=0;i<n;i++){
           
          if(arr[i]-k<=0){
              arr[i]=arr[i]+k+k;
          }
          
          if(arr[i]-k>0){
              arr[i]=arr[i]-k;
          }
              
          }
          
           
              sort(arr,arr+n);
              diff=arr[n-1]-arr[0];
              
              
           
           

    
    return diff;
       
    }

  
       
    
};
 
    
    
    
    
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
        
        
        Solution ob;
        
        auto ans=ob.getMinDiff(arr, n, k);

        
        cout<<ans<<"\n";
        
      
        
        
        
    }
    
    
