#include<iostream>
using namespace std;
template <class a, class b>
void myFun(a p1, b p2)
{
    cout<<"\np1 = "<<p1<<", p2 = "<<p2<<endl;
    cout<<"sizeof(p1) = "<<sizeof(p1)<<", sizeof(p2) = "<<sizeof(p2)<<endl;
}
int main()
{
    myFun(25, 30);
    myFun(2.5, "C++");
    myFun("String", 'S');
    myFun(60, 'c');
    return 0;
}
