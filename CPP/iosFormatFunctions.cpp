#include<iostream>
using namespace std;
int main()
{
    int items[4] = {10, 8, 12, 15};
    float cost[4] = {75.99, 100.99, 60.99, 99.99};
    //cout.fill('s');
    cout.precision(7);
    cout.setf(ios::showpos);
    cout.width(5);
    cout<<"ITEMS";
    cout.width(8);
    cout<<" COST";
    cout.width(15);

    cout<<"TOTAL VALUE"<<endl;
    float sum = 0;
    for(int i = 0; i < 4; i++)
    {
        cout.width(5);
        cout<<items[i];

        cout.width(8);
        cout<<cost[i];

        float value = items[i] * cost[i];
        cout.width(15);
        cout<< value <<endl;
        sum = sum + value;
    }
    cout<<"\n\nGrand Total : ";
    cout.width(2);
    cout<< sum<<endl;
    return 0;
}
