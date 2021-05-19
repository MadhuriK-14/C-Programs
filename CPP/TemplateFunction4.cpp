#include<iostream>
using namespace std;
template <class T>
void myFunction(T para)
{
    cout<<"\nTemplate myFunction(). para = "<<para<<endl;
    cout<<"sizeof(para) = "<<sizeof(para)<<endl;
}
void myFunction(int para)
{
    cout<<"\nInteger myFunction(). para = "<<para<<endl;
    cout<<"sizeof(para) = "<<sizeof(para)<<endl;
}
int main()
{
    myFunction(2.5);
    myFunction(250);
    myFunction("String");
    myFunction('c');
    return 0;
}
