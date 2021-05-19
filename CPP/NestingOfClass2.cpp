#include<iostream>
using namespace std;
class Outer
{
    int out;

    public:
        int outPub;


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

        Outer()
        {
            out = 60;
            outPub = 70;
            cout<<"\nOuter Class Constructor."<<endl;
        }
        void displayOuter()
        {
            cout<<"\nOuter Class : out :"<<out<<" outPub :"<<outPub<<endl;
        }
};
int main()
{
    cout<<"\nmain()"<<endl;

    Outer objOut;
    objOut.displayOuter();

    Outer::Inner objIn;
    objIn.displayInner();

    return 0;
}
