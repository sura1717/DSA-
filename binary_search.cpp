// binary search using recursion

#include<iostream>
using namespace std;

bool search(int *arr,int s,int e,int k)
{
    
    int mid=s+(e-s)/2;
    if(s>e)
    return false;

    if(arr[mid]==k)
    return true;
    
    if(arr[mid]<k)
    return search(arr,mid+1,e,k);
    else
    {
     return search(arr,s,mid-1,k);
   
}
}
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int k,size=9;
    cout<<"enter number for search"<<endl;
    cin>>k;
    if(search(arr,0,size-1,k))
    cout<<"key is present"<<endl;
    else
    cout<<"number is not present";
    return 0;
}