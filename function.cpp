#include <iostream>
using namespace std;
//call by reference❤❤❤❤
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
//call by reference😍😍😍
float multiply(int a,int b)
{
    float c=a*b;
    return c;
}
int main()
{
    int p,q;
    char ch;
    bool t;
    cout<<"enter two value  : ";
    cin>>p>>q;
    cout<<endl<<"do you want to see the sum of given two number 'y' or 'n' : ";
    cin>>ch;
    if(ch=='y')
    t=true;
    else 
    t=false;
    if (t==1)
    {
        cout<<endl<<"sum of given number is "<<sum(p,q);
        goto next;
    }
    else
    next : cout<<endl<<"do you want to see the mulltiplication of given two number 'y' or 'n' : ";
    cin>>ch;
    if(ch=='y')
    t=true;
    else 
    t=false;
    if (t==1)
    {
        cout<<endl<<"multiplication of given number is "<<multiply(p,q);
    }
    else
return 0;
}