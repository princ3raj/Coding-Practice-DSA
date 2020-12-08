//
//  main.cpp
//  SortingTechniques
//
//  Created by princeraj on 04/12/20.

//

//bubble sort:- a more optimised solution other than using n,i am using n-1 in every pass
//j is decrementing by 1 in each pass

#include <iostream>

using namespace std;


int findMax(int arr[], int n){
    int i, max;
    max=INT32_MIN;
    for (i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    
    return max;
}


void CountSort(int arr[], int n){
    int max=findMax(arr, n);
    
    int *c, i ,j;
    c= new int[max+1];
    
    for(i=0;i<max+1;i++)
    c[i]=0;

    for(j=0;j<n;j++)
    c[arr[j]]++;
    
    i=0;j=0;

    while (j<max+1) {
        
        
        if (c[j]>0) {
            
            arr[i++]=j;
            c[j]--;
            
        }else{
            j++;
        }
        
    }
    
}


void Merge(int A[],int l,int mid,int h)
{
    
     int i=l,j=mid+1,k=l;
     int B[100];
     while(i<=mid && j<=h)
   {
    if(A[i]<A[j])
        B[k++]=A[i++];
    else
        B[k++]=A[j++];
    }

     for(;i<=mid;i++)
     B[k++]=A[i];
    
     for(;j<=h;j++)
     B[k++]=A[j];
    
     for(i=l;i<=h;i++)
     A[i]=B[i];
    
}


void IMergeSort(int A[],int n){
    
    int p, l, h, mid, i;
    
    for (p=2; p<=n; p=p*2) {
        
        
        for (i=0; i+p-1<n; i=i+p) {
            
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A, l, mid, h);
       
        }
    }
    
  
    

    
    
    
    
    
}


void RMergeSort(int A[], int l, int h){
    
    int mid;
    if (l<h) {
        mid=(l+h)/2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid+1, h);
        Merge(A, l, mid, h);
    
}
    
}




int MyPartition(int arr[], int l, int h){
    
   
    
    int pivot=arr[l];
    int i,j;
    j=h;
    i=l;
    
    for (i=l;i<h; i++) {
        
        
        if (i>j) {
            swap(arr[l],arr[j]);
            break;
        }
        
        if (arr[i]<pivot) {
            
            if(arr[j]>pivot)
            {
                j--;
                continue;
            }
        }
        if(arr[i]>pivot){
            
            if (arr[j]<pivot) {
                swap(arr[i], arr[j]);
            }
            
            if (arr[j]>pivot) {
                j--;
            }
    }
}
    
  
    
    return j;
    
}



int Partition(int arr[],int l, int h){
    
    
    int pivot=arr[l];
    int j=h;
    int i=l;
    
    do {
        do {i++;} while (arr[i]<=pivot);
        do {j--;} while (arr[j]>pivot);
    
        if(i<j)swap(arr[i],arr[j]);
    
    } while (i<j);
    swap(arr[l],arr[j]);
    
    return j;
    
}

void QuickSort(int A[],int l,int h)
{
 int j;
  if(l<h)
 {
    j=Partition(A, l, h);
    QuickSort(A,l,j);
    QuickSort(A,j+1,h);
 }
    
}








void SelectionSort(int arr[],int n){
    
    
    int i, j,k;
    i=j=k=0;
    
    for (int i=0; i<n; i++) {
        
        
        for (int j=1; j<n-1; j++) {
            
            
            if (arr[j]<arr[k]) {
                k=j;
                j=j+1;
            }
            
        }
        
        swap(arr[j],arr[k]);
        
        
    }
    
    printf("selection sort\n");
    for(int z=0;z<n;z++)
    printf("%d\n",arr[z]);
    
    
    
    
    
    
}


void bubbleSort(int arr[], int n){
    
    int flag=0;
    
    for (int i=0;i<n-1; i++) {
        
        flag=0;
        for (int j=0; j<n-i-1; j++) {
            
            
            if (arr[j]>arr[j+1]) {
               swap(arr[j], arr[j+1]);
                flag=1;
              
            }
            
            
        }
        if(flag==0)
        {
            printf("list is already sorted\n");
            break;
        }
        
    }
    printf("Bubble sort\n");
    for(int z=0;z<n;z++)
    printf("%d\n",arr[z]);
    
    
    
    
    
    
}

void anotherInsertion(int arr[], int n){
    
    
    for (int i=0; i<n; i++) {
        
        for (int j=i+1; j<n-1-i; j++) {
            
            if (arr[j]<arr[i]) {
                swap(arr[j],arr[i]);
            }
            
        }
        
        
        
    }
    
    printf("Insertion new\n");
    for(int z=0;z<n;z++)
    printf("%d\n",arr[z]);
}


void Insertion(int A[],int n)
{


int i,j,x;
    
    
     for(i=1;i<n;i++)
     {
       j=i-1;
       x=A[i];
         
         
       while(j>-1 && A[j]>x)
       {
        A[j+1]=A[j];
         j--;
       }
         
    A[j+1]=x;
   }
    
    printf("Insertion sort\n");
    for(int z=0;z<n;z++)
    printf("%d\n",A[z]);
}




int main() {
    
    
    
    int n,i;
    cin>>n;
    int arr[n];
    for (auto &x:arr) {
        cin>>x;
    }
    
    CountSort(arr, n);

    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
    


}
