#include<iostream>
using namespace std;
class Shape
{
protected:
    float width, height;
public:
    Shape(float w=0.0, float h=0.0)
    {
        width = w;
        height = h;
    }
    virtual void area() = 0;  // Pure Virtual Function
};
class Rectangle : public Shape
{
public :
    Rectangle(float w=0.0, float h=0.0) : Shape(w, h)
    { }
    void area()
    {
        cout<<"\nRectangle class area : "<<(width * height)<<endl;
    }
};
class Triangle : public Shape
{
public :
    Triangle(float w=0.0, float h=0.0) : Shape(w, h)
    { }
    void area()
    {
        cout<<"\nTriangle class area : "<<((width * height)/2)<<endl;
    }
};
int main()
{
    Shape *ptr;
    Rectangle rect(10, 5);
    Triangle tri(8, 6);
    ptr = &rect;
    ptr->area(); // Late-binding

    ptr = &tri;
    ptr->area(); // Late-binding
}
