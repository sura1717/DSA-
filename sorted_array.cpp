#include<iostream>
using namespace std;

bool issorted(int arr[],int size)
{
    if(size==0 || size==1)
    return true;
   
   if(arr[0]>arr[1])
   return false;
   else  
    issorted(arr+1,size-1);

}

int getsum(int *arr,int size)
{
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];

    return getsum(arr+1,size-1)+arr[0];
}

int main()
{
    int s;
    int arr[8]={3,4,5,2,7,8,9,10};
    if (issorted(arr,8))
    cout<<"array is sorted"<<endl;
    else
    cout<<"array are not sorted"<<endl;
    cout<<"total sum of element is "<<getsum(arr,8)<<endl;
    return 0;
}