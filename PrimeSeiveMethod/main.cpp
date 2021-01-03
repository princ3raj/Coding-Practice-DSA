//
//  main.cpp
//  PrimeSeiveMethod
//
//  Created by princeraj on 02/01/21.
//

//by crossing numbers that are multiplied by other than one and itself from a list


#include <iostream>
using namespace std;


void PrimeBySeiveMethod(int arr[],int n){
   
    arr[0]=-1;
    
    
    for(int j=2;j*j<n;j++){
        
        
        for (int i=1; i<n; i++) {
            
            if(arr[i]%j==0){
                
                if(j%arr[i]==0){
                    continue;
                }else{
                    arr[i]=-1;
                }
            }
            
        }
    
    }
 
    
    
    
   
    
   

}



int main() {
    
    cout<<"Find all the Prime numbers under \"n\" "<<endl;
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        
        arr[i]=i+1;
    }
    PrimeBySeiveMethod(arr,n);
    
    
    for(int i=0;i<n;i++){
        if(arr[i]!=-1)
        cout<<arr[i]<<endl;
    }
    
    
   
}
