#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_front(5);
    cout<<"\nSize of deque = "<<d.size()<<endl;
    cout<<"\nElements in deque = ";
    for(int i = 0; i < d.size(); i++)
        cout<<d.at(i)<<" ";
    d.push_back(20);
    d.push_front(2);
    cout<<"\nSize of deque = "<<d.size()<<endl;
    cout<<"\nFront of deque = "<<d.front()<<endl;
    cout<<"\nBack of deque = "<<d.back()<<endl;
    cout<<"\nElements in deque = ";
    for(int i = 0; i < d.size(); i++)
        cout<<d.at(i)<<" ";
    d.pop_front();
    cout<<"\nElements in deque = ";
    for(int i = 0; i < d.size(); i++)
        cout<<d.at(i)<<" ";
    return 0;
}
