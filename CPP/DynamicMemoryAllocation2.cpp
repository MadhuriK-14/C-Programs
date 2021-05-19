#include<iostream>
using namespace std;
int main()
{
    int *p, i;
    p = new int[5];
    cout<<"\nEnter 5 values:";
    for(i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    cout<<"\n5 int values are : ";
    for(i=0;i<5;i++)
    {
        cout<<" ["<<i<<"] : "<<*(p+i);
    }
    cout<<"\nAddresses : ";
    for(i=0;i<5;i++)
    {
        cout<<" ["<<i<<"] : "<<(p+i);
    }
    delete [] p;
    return 0;
}
