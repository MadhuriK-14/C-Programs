#include<iostream>
using namespace std;
template <class T>
class TemplateDemo
{
private:
    T var;
public:
    TemplateDemo(){}
    TemplateDemo(T v)
    {
        var = v;
    }
    void show()
    {
        cout<<"\nvar = "<<var<<endl;
        cout<<"sizeof(var) = "<<sizeof(var)<<endl;
    }
};
int main()
{
    TemplateDemo<int> objI(25);
    TemplateDemo<char> objC('C');
    TemplateDemo<float> objF(2.5f);
    TemplateDemo<double> objD(2.5);
    objI.show();
    objC.show();
    objF.show();
    objD.show();
}
