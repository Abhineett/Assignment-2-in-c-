#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{

    int a=10,b=20;
    swap(a,b);
    cout<<"a=
    "<<a;
    cout<<endl;
    cout<<"b="<<b;
    return 0;

}
void swap(int &a,int &b)
{

    a=a+b;
    b=a-b;
    a=a-b;
}
