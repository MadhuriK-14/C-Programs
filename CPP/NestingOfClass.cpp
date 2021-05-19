#include<iostream>
using namespace std;
class Outer
{
    int out;
    class Inner
    {
        int in;
    public:
        int inPub;
        Inner()
        {
            in = 10;
            inPub = 20;
            cout<<"\nInner Class Constructor."<<endl;
        }
        void displayInner()
        {
            cout<<"\nInner Class : in :"<<in<<" inPub :"<<inPub<<endl;
        }
    };
    public:
        int outPub;
        Inner objIn;
        Outer()
        {
            out = 60;
            outPub = 70;
            cout<<"\nOuter Class Constructor."<<endl;
        }
        void displayOuter()
        {
            cout<<"\nOuter Class : out :"<<out<<" outPub :"<<outPub<<endl;
            objIn.displayInner();
        }
};
int main()
{
    cout<<"\nmain()"<<endl;
    Outer objOut;
    objOut.displayOuter();
    objOut.objIn.displayInner();

    Outer::Inner objIn;
    objIn.displayInner();
    return 0;
}
