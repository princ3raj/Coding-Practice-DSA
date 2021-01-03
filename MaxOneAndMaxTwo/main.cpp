//
//  main.cpp
//  MaxOneAndMaxTwo
//
//  Created by princeraj on 02/01/21.
//

//finding out the last two largest element and its location as well


#include <iostream>
using namespace::std;


void Max(int data[],int n,int max1,int max2,int loc1,int loc2)
{
    
    int count=0;
    max1=data[0];
    loc1=0;
    loc2=1;
    max2=data[1];
    if(max1<max2){
        swap(max1,max2);
        swap(loc1,loc2);
        
    }
    
    for(int i=2;i<n;i++){
        if(data[i]>max1){
            count++;
            max2=max1;
            loc2=loc1;
            max1=data[i];
            loc1=i;
        } else if(data[i]>max2){
            max2=data[i];
            loc2=i;
        }
        
       
        
        
        
    }
    
    
    cout<<max1<<endl;
    cout<<max2<<endl;
    
    cout<<loc1<<endl;
    cout<<loc2<<endl;
    cout<<count<<endl;
    
    
    
    
    
}

int main() {
    
    int arr[]={22,65,1,99,32,17,74,49,33,2};
    
    int max1=0,max2=0,loc1=0,loc2=0;
    int n=10;
    
    Max(arr,n,max1,max2,loc1,loc2);
    
    
    
    
    
}
