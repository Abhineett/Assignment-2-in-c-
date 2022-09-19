#include<iostream>
using namespace std;
void prime(int);
int  main()
{
    int a;
    cout<<"enter number";
    cin>>a;
    prime(a);
    return 0;

}
void prime(int a)
{

    int m=0,flag=0;
    m=a/2;
    for(int i=2;i<=m;i++)
    {
        if(a%i==0)
        {
            cout<<"number is not prime";
            flag=1;
            break;

        }
    }
    if(flag==0)
    {
        cout<<"number is prime";
    }

}

