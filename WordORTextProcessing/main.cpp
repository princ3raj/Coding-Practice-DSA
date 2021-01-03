//
//  main.cpp
//  WordORTextProcessing
//
//  Created by princeraj on 03/01/21.
//

#include <iostream>
using namespace std;


//In this we'll be doing text processing like Replacement, Insertion and Deletion Operation on particular text



void Insertion(char *str,char *InsertionStr,int position, unsigned long int length){
    
    int  initialposition=position;
    
    int numofelements=0;
    
    
    //using array jump variable, we can get the idea that how much jump would have to make a individual element in order to get its final position
    unsigned long int arrayJump=length-1;
    
    
    //this logic is for finding how many elements are present from position to end of string
    //because then we have to swap every element position by the (length of string, we are gonna insert)
    while (str[position]!='\0') {
        position++;
    }
    
    numofelements=position-initialposition;//this will give that number of elements
    
    
    
    //this loop is changing the position of elements
    while(numofelements){
        str[initialposition+numofelements+arrayJump]= str[initialposition+numofelements-1];
        numofelements--;
    }
    
 
    
    //this loop is filling those gap with the new string, you wanted to add
    for(int j=0;j<length;j++,initialposition++)
    str[initialposition]=InsertionStr[j];
    
    
    
    for(int k=0;k<100;k++)
    cout<<str[k];
    cout<<endl;
    
    
    
    
    
}

int main() {
    
    char str[100]={"ABCDEFG"};
    char InsertionStr[]={"PRINCE"};
    unsigned long int length=strlen(InsertionStr);
    int position=4;
    Insertion(str,InsertionStr,position,length);
 
}
