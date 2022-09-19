#include<iostream>
using namespace std;
void add(int x,int y)
{
    cout<<x+y<<endl;
}
void add(double x,double y)
{
    cout<<x+y;
}
int main()
{
    add(9,6);
    add(9.5,7.5);


    return 0;

}
