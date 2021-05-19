#include<iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout<<"\nBase's display()"<<endl;
    }
    virtual void show()
    {
        cout<<"\nBase's show()"<<endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout<<"\nDerived's display()"<<endl;
    }
    void show()
    {
        cout<<"\nDerived's show()"<<endl;
    }
};
int main()
{
    Base objB;
    Derived objD;
    Base *ptrB;
    cout<<"\nptrB points to Base";
    ptrB = &objB;
    ptrB->display(); // Base
    ptrB->show(); // Base

    cout<<"\nptrB points to Derived";
    ptrB = &objD;
    ptrB->display(); // Base    Early-binding OR Static Binding
    ptrB->show(); // Derived    Late-binding OR Dynamic Binding

    return 0;
}
