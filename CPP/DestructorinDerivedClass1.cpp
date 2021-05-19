#include<iostream>
using namespace std;
class Parent1
{
public:
    Parent1()
    {
        cout<<"\nParent 1's default Constructor."<<endl;
    }
    ~Parent1()
    {
        cout<<"\nParent 1's Destructor."<<endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout<<"\nParent2's default Constructor."<<endl;
    }
    ~Parent2()
    {
        cout<<"\nParent 2's Destructor."<<endl;
    }
};
class Child : public Parent1, Parent2
{
public:
    Child()
    {
        cout<<"\nChild's default Constructor."<<endl;
    }
    ~Child()
    {
        cout<<"\nChild's Destructor."<<endl;
    }
};
int main()
{
    Child objC;
    return 0;
}
