// linear search using recursion


#include<iostream>
using namespace std;
bool search(int *arr,int size,int k)
{
   if(size==0)
    return false;

    if(arr[0]==k)
    return true;
   else
   {
    bool remainingpart=search(arr+1,size-1,k);
    return remainingpart;
   }
}

int main()
{
    int arr[7]={7,6,3,5,9,1,3};
    int size=5;
    int k;
    cout<<"enter key for search: "<<endl;
    cin>>k;
    bool ans=search(arr,size,k);
    if(ans)
    cout<<"number is present"<<endl;
    else
    cout<<"number is not present"<<endl;
    return 0;
}