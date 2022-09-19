#include<iostream>
using namespace std;
int sum(int z,int y=0,int a=0)
{
    return (z+y+a);
}
int main()
{
    cout<<sum(2,5)<<endl;
    cout<<sum(10)<<endl;
    cout<<sum(20,33,10)<<endl;


    return 0;

}
