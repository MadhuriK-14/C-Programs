#include<iostream>
using namespace std;
template <class T>
void swapping(T a, T b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nSwapped inside function."<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
}
int main()
{
    swapping(25, 30);
    swapping(2.5, 3.14);
    swapping("String", "Template");
    swapping('c', 'S');
    return 0;
}
