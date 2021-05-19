#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    char name[30];
    int roll;
    float per;
public :
    void getData()
    {
        cout<<"Enter name : ";
        cin.getline(name,30);
        cout<<"Roll No : ";
        cin>>roll;
        cout<<"Percentage : ";
        cin>>per;
    }
    void showData()
    {
        cout<<"Student details are : ";
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll<<endl;
        cout<<"Percentage : "<<per<<endl;
    }
};
int main()
{
    Student obj1;
    obj1.getData();
    fstream fobj;
    fobj.open("Student3.txt", ios::app | ios::out);
    fobj.write((char*)&obj1, sizeof(obj1));
    fobj.close();
    Student obj2;
    fobj.open("Student3.txt", ios::in);
    fobj.read((char*)&obj2, sizeof(obj2));
    obj2.showData();
    fobj.close();
    return 0;
}
