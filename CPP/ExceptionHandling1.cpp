#include<iostream>
using namespace std;
int main()
{
    int n, d;
    cout<<"\nEnter 2 numbers:";
    cin>>n>>d;
    int div;
    try
    {
        if(d != 0)
        {
            div = n/d;
            cout<<"\nDivision = "<<div;
        }
        else
        {
            throw(d);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught. Value of denominator = "<<i;
    }
    return 0;
}
