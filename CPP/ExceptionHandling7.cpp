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
    catch(int i)
    {
        cerr<<"\nMultiplication of negative nos"<<endl;
        throw i;
    }
    catch(double d)
    {
        cerr<<"\nDivision by zero not possible"<<endl;
        throw d;
    }
    cout<<"Exiting mathOp()"<<endl;
}
int main()
{
    cout<<"\nInside main()"<<endl;

    cout<<"\nInvoking mathOp()"<<endl;
    try
    {
        mathOp(72, 6);
        mathOp(-5, -3);
        mathOp(50, 0);
    }
    /*catch(int i)
    {
        cerr<<"\nCaught multiplication exception inside main()"<<endl;
    }
    catch(double d)
    {
        cerr<<"\nCaught division exception inside main()"<<endl;
    }*/
    catch(...)
    {
        cerr<<"\nCaught exception inside main()"<<endl;
    }

    cout<<"\nExiting main()"<<endl;
    return 0;
}
