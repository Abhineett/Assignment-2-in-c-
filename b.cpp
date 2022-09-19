#include<iostream>
using namespace std;
void highestdigit(int);
int main()
{

    int a;
    cout<<"enter number";
    cin>>a;
    highestdigit(a);
    return 0;
}
void highestdigit(int a)
{
    int p=0;
    while(a!=0)
    {
        int b=a%10;
        a=a/10;
        if(b>p)
            p=b;

    }
    cout<<p;
}
