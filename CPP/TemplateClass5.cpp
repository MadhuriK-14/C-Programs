#include<iostream>
using namespace std;
template<class T, int s>
class TemplateArray
{
    T arr[s];
    T sum;
public:
    TemplateArray(){}
    TemplateArray(T a[])
    {
        for(int i = 0; i < s; i++)
            arr[i] = a[i];
    }
    T show()
    {
        sum = 0;
        cout<<"\nArray elements are:";
        for(int i = 0; i < s; i++)
        {
            sum+=arr[i];
            cout<<" "<<arr[i];
        }
        return sum;
    }
};
int main()
{
    int nos[] = {10,20,30,40,50};
    TemplateArray<int, 5>objI(nos);
    float vals[] = {2.5, 3.5, 4.5};
    TemplateArray<float, 3>objF(vals);
    cout<<"\nSum = "<<objI.show();
    cout<<"\nSum = "<<objF.show();
    return 0;
}
