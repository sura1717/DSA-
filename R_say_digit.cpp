#include <iostream>
using namespace std;

void saydigit(int num,string arr[])
{
    if(num==0)
    return ;

    int digit=num%10;
    num=num/10;

    saydigit(num, arr);
    cout<<arr[digit-1]<<" ";

}

int main()
{
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    string arr[10]={"one","two","three","four","five","six","seven","eight","nine"};

    saydigit(num,arr);
    
    return 0;
}