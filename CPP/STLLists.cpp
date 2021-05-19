#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void displayList(list<int>l)
{
    list<int> :: iterator it;
    cout<<"\nList elements are = ";
    for(it = l.begin(); it != l.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    list<int>li;
    for(int i = 0; i < 10; i++)
        li.push_back((i+1)*5);
    displayList(li);
    cout<<"Front of list = "<<li.front()<<endl;
    cout<<"Back of list = "<<li.back()<<endl;
    li.pop_back();
    cout<<"After pop_back()"<<endl;
    displayList(li);
    li.reverse();
    cout<<"After reverse()"<<endl;
    displayList(li);
    li.sort();
    cout<<"After sort()"<<endl;
    displayList(li);
    return 0;
}
