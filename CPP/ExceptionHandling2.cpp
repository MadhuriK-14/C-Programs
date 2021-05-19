#include<iostream>
using namespace std;
void divide(int n, int d)
{
    cout<<"\nInside divide()"<<endl;
    if(d != 0)
    {
        int div = n/d;
        cout<<"\nDivision = "<<div<<endl;
    }
    else
    {
        throw(d);
    }
    cout<<"Exiting divide()"<<endl;
}
int main()
{
    cout<<"\nInside main()"<<endl;
    try
    {
        cout<<"\nInvoking divide()"<<endl;
        divide(72, 6);
        divide(50, 0);
    }
    catch(int i)
    {
        cout<<"\nDivision by zero not possible"<<endl;
    }
    cout<<"\nExiting main()"<<endl;
    return 0;
}
