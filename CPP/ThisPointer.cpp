#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    char name[20];
    float age;
public :
    Person(char *s, float a)
    {
        strcpy(name, s);
        age = a;
    }
    Person& greater(Person &p)
    {
        if(p.age >= age)
            return p;
        else
            return *this;
    }
    void display()
    {
        cout<<"\nName : "<<name<<endl<<"Age : "<<age<<endl;

    }
};
int main()
{
    Person P1("Abhishek", 20);
    Person P2("Abhijit", 21);
    Person P3("Rohan", 19);
    Person P = P1.greater(P3);
    cout<<"\nElder person is:";
    P.display();
    P=P1.greater(P2);
    cout<<"\nElder person is : ";
    P.display();
    return 0;
}
