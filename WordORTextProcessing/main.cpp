//
//  main.cpp
//  WordORTextProcessing
//
//  Created by princeraj on 03/01/21.
//

#include <iostream>
using namespace std;


//In this we'll be doing text processing like Replacement, Insertion and Deletion Operation on particular text



//PATTERN MATCH and then delete that substring

void Deletion(char *str, char *pattern,unsigned long int size, unsigned long int stringSize){
    int match=0;
    int flag=0;
    int i=0;
        for(int j=flag;j<=stringSize;j++){
            
            if(pattern[i]==str[j]){
                i++;
            
            }
            else
            {
                match=i;
                i=0;
                j=j-match;// this is done for going backwards when patter matching fails in between like UUY in UUUUUUY
            }
            
            if(i==size)
            {
               
                
                for(int u=0;u<size;u++){
                    str[j-i+1+u]='\0';
                }
                break;
            }
        }
    
    if(i==0){
        printf("No string found\n");
    }
    
    
    for(int s=0;s<stringSize;s++)
    cout<<str[s];
    cout<<endl;
    
}






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


//FIND SUBSTRING IN A STRING and delete it by its position to given length
void FindSubstring(char *str,int initial, int length, unsigned long int str5len){
    
    
    for(int i=initial-1;i<length+initial-1;i++){
        
        str[i]='\0';
        
    }
    
    for (int i=0; i<str5len; i++) {
        cout<<str[i];
    }
    
    cout<<endl;
}


int main() {
    
    
    
    //Insertion Function Calling Bpdy
    char str[100]={"ABCDEFG"};
    char InsertionStr[]={"PRINCE"};
    unsigned long int length=strlen(InsertionStr);
    int position=4;
    Insertion(str,InsertionStr,position,length);
    
    
    //pattern matching and then delete (deletion function calling body)
        char string[]={"ABCDEFG"};
        char pattern[]={"DE"};
        unsigned long int stringSize=strlen(string);
        unsigned long int patternSize=strlen(pattern);
    Deletion(string,pattern,patternSize,stringSize);
    
    
    //Find Sunstring from given position and delete it till its length
    int initial=2,length1=4;
    char str5[80]={"ABCDEFG"};
    unsigned long int str5len=strlen(str5);
    
    FindSubstring(str5, initial, length1,str5len);
 
}
