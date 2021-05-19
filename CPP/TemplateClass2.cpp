#include<iostream>
using namespace std;
template <class T1, class T2>
class TemplateDemo2
{
private:
    T1 var1;
    T2 var2;
public:
    TemplateDemo2(){}
    TemplateDemo2(T1 v1, T2 v2)
    {
        var1 = v1;
        var2 = v2;
    }
    void show()
    {
        cout<<"\nvar1 = "<<var1<<", var2 = "<<var2<<endl;
        cout<<"sizeof(var1) = "<<sizeof(var1)<<", sizeof(var2) = "<<sizeof(var2)<<endl;
    }
};
int main()
{
    TemplateDemo2<int, char> objIC(25, 'S');
    TemplateDemo2<char, float> objCF('C', 2.5f);
    TemplateDemo2<float, int> objFI(2.5f, 2500);
    TemplateDemo2<double, double> objDD(2.5, 3.5);
    objIC.show();
    objCF.show();
    objFI.show();
    objDD.show();
}
