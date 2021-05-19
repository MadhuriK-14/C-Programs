#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[25];
    cout<<"\nEnter your name : ";
    cin>>str1;
    int len = strlen(str1);
    char *sp;
    sp = new char[len+1];
    strcpy(sp, str1);
    cout<<"\nstr1 : "<<str1;
    cout<<"\nsp : "<<sp;
    delete sp;
    return 0;
}
