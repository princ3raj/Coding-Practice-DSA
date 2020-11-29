#include <iostream>

int main() {
    
    
    
    int t;
    std::cin>>t;
    
    while(t--){
        
        
        int n;
        std::cin>>n;
        
        int end=n-1;
        int alongend=n-2;
        int arr[n];
        for(auto &x:arr){
            
            std::cin>>x;
        }
        
        
        for(int i=0;i<n-1;i++)
        
        {
        
            std::swap(arr[alongend],arr[end]);
            alongend--;
            end--;
            

            
        }
        
        printf("*******\n");
        
        for (int j=0;j<n; j++) {
            printf("%d\n",arr[j]);
        }
        
        
        
    }
    
    //code
    return 0;
}
