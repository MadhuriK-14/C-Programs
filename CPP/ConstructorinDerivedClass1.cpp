#include<iostream>
using namespace std;
class Parent1
{
    int p1;
public:
    Parent1()
    {
        p1 = 5;
        cout<<"Parent 1's Default Constructor. p1 : "<<p1<<endl;
    }
    Parent1(int k)
    {
        p1 = k;
        cout<<"Parent 1's Parameterized Constructor. p1 : "<<p1<<endl;
    }
};
class Parent2
{
    int p2;
public:
    Parent2()
    {
        p2 = 10;
        cout<<"Parent 2's Default Constructor. p2 : " <<p2<<endl;
    }
    Parent2(int i)
    {
        p2 = i;
        cout<<"Parent 2's Parameterized Constructor. p2 : " <<p2<<endl;
    }
};
class Child : public Parent1, Parent2
{
    int c;
public:
    Child()
    {
        c = 20;
        cout<<"Child's Default Constructor. c : " <<c<<endl;
    }
    Child(int j) : Parent2(j * 2), Parent1(j/2)
    {
        c = j;
        cout<<"Child's Parameterized Constructor. c : " <<c<<endl;
    }
};
int main()
{
    cout<<"Constructor in Derived Class:"<<endl;
    //Child objC;
    Child objCP(50);
    return 0;
}
