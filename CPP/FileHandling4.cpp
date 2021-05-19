#include<iostream>
#include<stdio.h>
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
        fflush(stdin);
        cout<<"Roll No : ";
        cin>>roll;
        cout<<"Percentage : ";
        cin>>per;
    }
    void showData()
    {
        cout<<"Student details are : "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<roll<<endl;
        cout<<"Percentage : "<<per<<endl;
    }
};
int main()
{
    Student obj;
    int option = 1;
    fstream fobj;
    fobj.open("Student3.txt", ios::app | ios::out | ios::in);
    do
    {
        obj.getData();
        fobj.write((char*)&obj, sizeof(obj));
        cout<<"\nPress 1 to continue. 0 to Exit : ";
        cin>>option;
    }while(option != 0);

    fobj.seekg(0);
    fobj.read((char*)&obj, sizeof(obj));
    while(!fobj.eof())
    {
        obj.showData();
        fobj.read((char*)&obj, sizeof(obj));
    }
    fobj.close();
    return 0;
}
