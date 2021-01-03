//
//  main.cpp
//  SumOfDigitsInAInteger
//
//  Created by princeraj on 02/01/21.
//

//counting the number of digits in a number as well

#include <iostream>
using namespace std;

int main() {
    
    int count=0;
    int num;
    int t=0;
    int rem=0;
    cin>>num;
    
    while(num>10){
        rem=num%10;
        t=t+rem;
        num=num/10;
        count++;
    }
    cout<<t+num<<endl;
    cout<<count+1<<endl;
  
}
