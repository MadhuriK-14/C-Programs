#include<iostream>
using namespace std;
template <class T>
void myFunction(T para)
{
    cout<<"\nTemplate myFunction() with 1 argument.\npara = "<<para<<endl;
    cout<<"sizeof(para) = "<<sizeof(para)<<endl;
}
template <class T>
void myFunction(T p1, T p2)
{
    cout<<"\nTemplate myFunction() with 2 arguments but same type.\np1 = "<<p1<<", p2 = "<<p2<<endl;
    cout<<"sizeof(p1) = "<<sizeof(p1)<<", sizeof(p2) = "<<sizeof(p2)<<endl;
}
template <class T1, class T2>
void myFunction(T1 p1, T2 p2)
{
    cout<<"\nTemplate myFunction() with 2 arguments and 2 different types.\np1 = "<<p1<<", p2 = "<<p2<<endl;
    cout<<"sizeof(p1) = "<<sizeof(p1)<<", sizeof(p2) = "<<sizeof(p2)<<endl;
}
int main()
{
    myFunction(2.5, 3.14);
    myFunction(250);
    myFunction("String", 25);
    myFunction('c');
    myFunction(360, 3.6);
    return 0;
}
