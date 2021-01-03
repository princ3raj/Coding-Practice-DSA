//
//  main.cpp
//  StringProcessing
//
//  Created by princeraj on 02/01/21.
//

#include <iostream>
using namespace std;


//String Concatenation
void Concatenation(char *str1, char *str2, unsigned long int size1, unsigned long int total){
    char str3[80];
    int n=0;

    
    for (int i=0; i<size1; i++) {
        str3[i]=str1[i];
   
    }
    
    
    while (size1<total) {
        str3[size1]=str2[n];
        n++;
        size1++;
    
    }
    
   
    
    for(int k=0;k<total;k++)
    cout<<str3[k];
    cout<<endl;

    
   
  
    
    
    
}



//FIND SUBSTRING IN A STRING
void FindSubstring(char *str,int initial, int length){
    
    
    for(int i=initial-1;i<length+initial-1;i++){
        
        cout<<str[i]<<endl;
        
    }
}


//PATTERN MATCHING OR AKA INDEXING

void PatternMatching(char *str, char *pattern,unsigned long int size, unsigned long int patterSize){
    int match=0;
    int flag=0;
    int i=0;
        for(int j=flag;j<=patterSize;j++){
            
            if(pattern[i]==str[j]){
                i++;
            }
            else
            {
                match=i;
                i=0;
                j=j-match;
            }
            
            if(i==size)
            {
                cout<<j-i+1<<endl;
                break;
            }
        }
    
    if(i==0){
        printf("No string found\n");
    }
}


int main() {
    
//finding substring
//    int initial=4,length=4;
//    char str[80]={"THE\"END"};
   
    

    
    
//pattern matching
    char string[]={"PRINCE IS A MIND BLOWING let me boast atleats haha"};
    char pattern[]={"haha"};
    unsigned long int stringSize=strlen(string);
    unsigned long int patterSize=strlen(pattern);
    
    
    PatternMatching(string,pattern,patterSize,stringSize);
 
    
   
    
    //Concatenation function call and body
    char str1[]={"Princ "};
    char str2[]={"eRaj"};


   unsigned long int size1=strlen(str1);
   unsigned long int size2=strlen(str2);

   unsigned long int total=size1+size2;
   Concatenation(str1,str2,size1,total);
    
   
}
