

#include <iostream>

using namespace std;


void myswap(int &a, int &b){
    
    
    int temp=a;
    a=b;
    b=temp;
}


void Mysortfunction(int arr[],int n){
    
    for(int i=0;i<n;i++){
        
        for (int j=0; j<n; j++) {
            
            if (arr[i]<arr[j]) {
                
                myswap(arr[i], arr[j]);
                
            }
        }
    }

    
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for (auto &x:arr) {
        
        cin>>x;
        
    }

    Mysortfunction(arr,n);
    printf("*****\n");
    for(int j=0;j<n;j++)
    printf("%d\n",arr[j]);

}
