#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf;
    outf.open("Student2.txt");
    int option = 0;
    do
    {
        cout<<"Enter Student Name : ";
        char name[30];
        cin >> name;
        outf<<"Name : "<<name<<"\n";
        cout<<"Roll No : ";
        int roll;
        cin>>roll;
        outf<<"Roll No : " <<roll<<"\n";
        cout<<"Percentage : ";
        float per;
        cin>>per;
        outf<<"Percentage : "<<per<<"\n";
        cout<<"\nPress 1 to continue. 0 to Exit : ";
        cin>>option;
    }while(option != 0);
    outf.close();
    char str[200];
    ifstream inf;
    inf.open("Student2.txt");
    cout<<"\n\nFile contents are : \n";
    while(inf)
    {
        inf.getline(str, 200);
        cout<<str<<"\n";
    }
    inf.close();
    return 0;
}
