#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    char c;
    cout<<"\nEnter a character : ";
    cin.get(c);
    cout<<"\nCharacter you entered is : ";
    cout.put(c);

    fflush(stdin);

    char str[20];
    cout<<"\nEnter a string : ";
    cin.getline(str, 20);
    int len = strlen(str);
    cout<<"\nString you entered is : ";
    cout.write(str, len);
    return 0;
}
