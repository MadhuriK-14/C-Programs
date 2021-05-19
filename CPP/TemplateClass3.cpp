#include<iostream>
using namespace std;
template <class T>
class TemplateDemo3
{
private:
    T var;
public:
    TemplateDemo3(){}
    TemplateDemo3(T v)
    {
        var = v;
    }
    T square()
    {
        cout<<"\nvar = "<<var<<endl;
        cout<<"sizeof(var) = "<<sizeof(var)<<endl;
        return var * var;
    }
};
int main()
{
    TemplateDemo3<int> objI(5);
    TemplateDemo3<float> objF(2.5f);
    cout<<objI.square();
    cout<<objF.square();
}
