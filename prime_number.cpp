#include<iostream>
using namespace std;

bool isprime(int num)
{
     for(int i=2;i<num;i++)
    {
        if (num%i==0)
        return false;
        
    }return true;
}

int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;

     if (isprime(num))
     cout<<"number is prime"<<endl;
     else
     cout<<"number is not prime"<<endl;
     return 0;
}