//
//  main.cpp
//  PrimeOrNotCheck
//
//  Created by princeraj on 02/01/21.
//

//checking is it a prime number or not

#include <iostream>
using  namespace::std;

void PrimeOrNot(int num){
    
    int flag=2;
    
    for(int i=2;i<num;i++){
        if(num%i==0)
        {
            printf("not a prime number\n");
            break;

        } else{
            flag++;
            continue;
        }
}
    
    if(flag==num){
        printf("prime number\n");
        
    }

}

int main() {
    
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    PrimeOrNot(num);
   
}
