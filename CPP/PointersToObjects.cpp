#include<iostream>
using namespace std;
class Dist
{
    int feet;
    float inches;
public:
    void getDist()
    {
        cout<<"\nEnter Feet : ";
        cin>>feet;
        cout<<"\nEnter Inches : ";
        cin>>inches;
    }
    void showDist()
    {
        cout<<"\nDistance : Feet : "<<feet<<", Inches : "<<inches<<endl;
    }
};
int main()
{
    Dist *d;
    d = new Dist;
    d->getDist();
    d->showDist();
    delete d;
    return 0;
}
