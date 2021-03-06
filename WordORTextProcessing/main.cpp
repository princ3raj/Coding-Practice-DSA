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
                
                flag++;
               
            }
        }
    
    if(i==0 && flag<=0){
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
    
    
//
//    for(int k=0;k<100;k++)
//    cout<<str[k];
//    cout<<endl;

    
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


//PATTERN MATCH and then replace its occurence with pattern2

void Replacement(char *str, char *pattern1, char *pattern2,unsigned long int pattern1size,unsigned long int pattern2size,unsigned long int stringSize){
    int match=0;
    int flag=0;//flag is used to know that atleast one patter matched or not
    int i=0;
        for(int j=flag;j<=stringSize;j++){
            
            if (str[j]=='\0') {
                break;
            }
            
            if(pattern1[i]==str[j]){
                i++;
            }
            else
            {
                match=i;
                i=0;
                j=j-match;// this is done for going backwards when pattern matching fails in between like UUY in UUUUUUY
            }
            
            if(i==pattern1size)
            {
                for(int u=0;u<pattern1size;u++){
                    str[j-i+1+u]='*';
                }
                
                Insertion(str, pattern2, j-i+1, pattern2size);
               
            
                flag++;
                break;
               
            }
        }
    
    if(i==0 && flag<=0){
        printf("No string found\n");
    }
    
    for(int s=0;s<stringSize;s++)
    cout<<str[s];
    cout<<endl;
    
}


int main() {
    
//    Insertion Function Calling Bpdy
    char str[100]={"XAY"};
    char InsertionStr[]={"AB"};
    unsigned long int length=strlen(InsertionStr);
    int position=1;
    Insertion(str,InsertionStr,position,length);

    
//    pattern matching and then delete (deletion function calling body)
        char string[]={"XABYABZ"};
        char pattern[]={"AB"};
        unsigned long int stringSize=strlen(string);
        unsigned long int patternSize=strlen(pattern);
    Deletion(string,pattern,patternSize,stringSize);

//    
//    Find Substring from given position and delete it till its length
    int initial=2,length1=4;
    char str5[80]={"ABCDEFG"};
    unsigned long int str5len=strlen(str5);
    FindSubstring(str5, initial, length1,str5len);
    
    
    
    //Replacement Function Body Call
    //Replace pattern1 with pattern2

    char str6[100]={"XAYA"};
    char pattern1[]={"A"};
    char pattern2[]={"PRINCERAJ"};
    unsigned long int pattern1size=strlen(pattern1);
    unsigned long int pattern2size=strlen(pattern2);
//    unsigned long int str6Size=strlen(str6);
    Replacement(str6, pattern1, pattern2,pattern1size,pattern2size,100);
    for(int i=0;i<100;i++){
        if(str6[i]=='*'){
            str6[i]='\0';
        }
    }
    
    for(int i=0;i<100;i++){
        cout<<str6[i];
    }
    cout<<endl;

    
    
    
    
    
    
 
}
