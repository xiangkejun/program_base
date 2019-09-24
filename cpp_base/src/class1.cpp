#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"A construct"<<endl;}
    virtual ~A(){cout<<"A destroy"<<endl;}
};
class B:public A
{
    public:
    B(){cout<<"B construct "<<endl;}
    virtual ~B(){cout<<"B destroy"<<endl;}
};

int main()
{
    B b; //A construct B construct B destroy A destroy
}