#include<iostream>
#include<iomanip>

using namespace std;
#define size 100
int partition(int a[], int beg, int end)
{
 int left, right, temp, loc, flag;
loc = left = beg;
right = end;
flag = 0;
while(flag != 1)
{
    while((a[loc] <= a[right]) && (loc!=right))
    right--;
    if(loc==right)
    flag =1;
    else if(a[loc]>a[right])
    {
        temp = a[loc];
        a[loc] = a[right];
        a[right] = temp;
        loc = right;
    }
    if(flag!=1)
    {
        while((a[loc] >= a[left]) && (loc!=left))
        left++;
        if(loc==left)
        flag =1;
        else if(a[loc] <a[left])
        {
} }
}
return loc;
temp = a[loc];
a[loc] = a[left];
a[left] = temp;
loc = left;
}
void quick_sort(int a[], int beg, int end)
{
    int loc;
    if(beg<end)
    {
        loc = partition(a, beg, end);
        quick_sort(a, beg, loc-1);
        quick_sort(a, loc+1, end);
} }
int main() {
    int arr[size], i, n;
    clock_t start, end;
    std::cout<<"\nEnter the number of elements in the array: ";
    std::cin>>n;
    std::cout<<"\nEnter the elements of the array: ";

for(i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    start = clock();
    quick_sort(arr, 0, n-1);
    end = clock();
    std::cout<<"\nThe sorted array is: \n";
    for(i=0;i<n;i++)
    std::cout<<arr[i]<<"\t";
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "\nTime taken by program is : " << fixed<< time_taken <<
std::setprecision(5);
    std::cout << " sec ";
    return 0;
}
