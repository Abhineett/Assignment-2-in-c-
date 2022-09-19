#include<iostream>
using namespace std;
void area(int r)
{
    cout<<"area of circle="<<3.14*r*r<<endl;
}
void area(int l,int b,int c )
{
    cout<<"area of rectangle="<<l*b*c<<endl;
}
void area(int A, int H)
{
   cout<<"area of triangle="<<A*H/2<<endl;
}
int main()
{
    /*float r;
    cin>>r;
    float l,b;
    cin>>l>>b;*/
    float A,H;
    cin>>A>>H;
    //area(r);
    //area(l,b,1);
    area(A,H);



    return 0;

}
