#include<iostream>
using namespace std;
template <class T>
void templateFunction(T para)
{
    cout<<"\npara = "<<para<<endl;
    cout<<"sizeof(para) = "<<sizeof(para)<<endl;
}
int main()
{
    templateFunction(25);
    templateFunction(2.5);
    templateFunction("String");
    templateFunction('c');
    return 0;
}
