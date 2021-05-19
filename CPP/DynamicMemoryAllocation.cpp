#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int;
    *p = 123;
    cout<<"\nint value : "<<*p;
    cout<<"\naddress : "<<p;
    delete p;
    return 0;
}
