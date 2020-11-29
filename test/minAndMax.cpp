//
//  main.cpp
//  test
//
//  Created by princeraj on 18/11/20.
//

#include <iostream>




int main() {
    int i=0;

    
    int found=0;
    
    int small=0;
    int j=0;
    
    
    
    
    
    
    int arr[]={7,10,4,3,20,15};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for (i=0;i<size;i++)
    {
        
        
        if(arr[i]>found)
        {
            
            found=arr[i];
        
        }
        

    }
    
    
    small=found;
    
    
    for(j=0;j<size;j++){
        
        
        if(arr[j]<small){
            
            small=arr[j];
            
        }
        
       
    }
    
   
    

   std::cout<<"greatest number is:"<<found<<"\n";
   std::cout<<"smallest no. is :"<<small<<"\n";
    

}
