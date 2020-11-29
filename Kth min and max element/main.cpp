////
////  main.cpp
////  test
////
////  Created by princeraj on 18/11/20.
////
//
//#include <iostream>
//
//
//
//
//static void minAndMax(int &found, int &indexofMax, int &indexofSmall, int &small, int arr[], int size) {
//
//    int i=0;
//
//
//    found = 0;
//
//    small = 0;
//    int j=0;
//
//
//
//
//
//    for (i=0;i<size;i++)
//    {
//
//
//        if(arr[i]>found && arr[i]!=-1)
//        {
//
//            found=arr[i];
//            indexofMax=i;
//
//        }
//
//
//    }
//
//
//    small=found;
//
//
//    for(j=0;j<size;j++){
//
//
//        if(arr[j]<small && arr[j]!=-1){
//
//            small=arr[j];
//            indexofSmall=j;
//
//        }
//
//
//    }
//
//
//}
//
//int main() {
//    int k;
//    std::cin>>k;
//    int arr[]={7,10,4,3,20,15,2,1,9};
//    int found;
//    int small;
//    int indexofSmall;
//    int indexofMax;
//    int size=sizeof(arr)/sizeof(arr[0]);
//
//
//
//    for (int i=0; i<k; i++) {
//
//        minAndMax(found, indexofMax, indexofSmall, small,arr,size);
//
//       
//        arr[indexofSmall]=-1;
//
//
//
//    }
//
//    printf(" %dth smallest no is %d\n",k, small);
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//}

#include<iostream>
using namespace::std;

int main() {
    //code
    int t;
    
    cout<<"enter test cases";
  
    cin>>t;
    while(t--)
    {
        int n,k;
        cout<<"enter no. of elements you want in an array"<<endl;
        cin>>n;
        int a[n];
        for(auto &x:a)
        {
            cout<<"enter"<<n<<"elements"<<endl;
            cin>>x;
        }
        
        cout<<"enter kth element"<<endl;
        cin>>k;
        sort(a,a+n);
        cout<<a[k-1];
        cout<<"\n";
    }
    return 0;
}
