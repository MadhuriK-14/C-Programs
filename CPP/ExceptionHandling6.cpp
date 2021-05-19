#include<iostream>
using namespace std;
void mathOp(int n, int d)
{
    cout<<"\nInside mathOP()"<<endl;
    try
    {
        if(n >= 0 && d >= 0)
        {
            int mul = n * d;
            cout<<"\nMultiplication = "<<mul<<endl;
        }
        else
        {
            throw 1;
        }
        if(d != 0)
        {
            int div = n/d;
            cout<<"\nDivision = "<<div<<endl;
        }
        else
        {
            throw(1.0);
        }
    }
    catch(...)
    {
        cerr<<"\nError"<<endl;
    }
    cout<<"Exiting mathOp()"<<endl;
}
int main()
{
    cout<<"\nInside main()"<<endl;

    cout<<"\nInvoking mathOp()"<<endl;

    mathOp(72, -6);
    mathOp(50, 0);

    cout<<"\nExiting main()"<<endl;
    return 0;
}
