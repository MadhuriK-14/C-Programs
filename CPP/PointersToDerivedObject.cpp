#include<iostream>
using namespace std;
class Base
{
public:
    int b;
    void show()
    {
        cout<<"\n b = "<<b<<endl;
    }
};
class Derived : public Base
{
public:
    int d;
    void show()
    {
        cout<<"\n b = "<<b;
        cout<<"\n d = "<<d<<endl;
    }
};
int main()
{
    Base *ptrB;
    Base objB;
    ptrB = &objB;
    ptrB->b = 100;
    cout<<"\nptrB points to Base object:";
    ptrB->show();
    Derived objD;
    ptrB = &objD;
    ptrB->b = 200;
    //ptrB->d = 300; //error
    cout<<"\nptrB points to Derived object:";
    ptrB->show();

    Derived *ptrD;
    ptrD = &objD;
    ptrD->b = 400;
    ptrD->d = 500;
    cout<<"\nptrD points to Derived object:";
    ptrD->show();

    cout<<"\nusing explicit type casting:";
    ((Derived *)ptrB)->d = 800;
    ((Derived *)ptrB)->show();
    return 0;
}
