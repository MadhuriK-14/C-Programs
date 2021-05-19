#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf;
    outf.open("Student.txt");
    cout<<"Enter Student Name : ";
    char name[30];
    cin >> name;
    outf<<name<<"\n";
    cout<<"Roll No : ";
    int roll;
    cin>>roll;
    outf<<roll<<"\n";
    cout<<"Percentage : ";
    float per;
    cin>>per;
    outf<<per<<"\n";
    outf.close();
    ifstream inf("Student.txt");
    inf>>name;
    inf>>roll;
    inf>>per;
    cout<<"\nStudent name : "<<name;
    cout<<"\nRoll No : "<<roll;
    cout<<"\nPercentage : "<<per;
    inf.close();
    return 0;
}
