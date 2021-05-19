#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    //setprecision(5);
    cout<<"\nEnter Decimal number:";
    cin>>setbase(10)>>n;
    cout<<"\nDecimal No : "<<setbase(10)<<setw(6)<<n;
    cout<<"\nOctal No : "<<setbase(8)<<setw(6)<<n;
    cout<<"\nHexa-Decimal No : "<<setbase(16)<<setw(6)<<n;
}
