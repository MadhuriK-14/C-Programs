#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout<<"Size of v1 = "<<v1.size()<<endl;
    v1.assign(4, 5);
    cout<<"Size of v1 = "<<v1.size()<<endl;
    cout<<"The vector elements are :"<<endl;
    for(int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";
    v1.push_back(20);
    cout<<"\nAfter push_back(), the vector elements are :"<<endl;
    for(int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";
    v1.insert(v1.begin(), 15);
    cout<<"\nAfter insert(), the vector elements are :"<<endl;
    for(int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";
    v1.pop_back();
    cout<<"\nAfter pop_back(), the vector elements are :"<<endl;
    for(int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";
    v1.erase(v1.begin());
    cout<<"\nAfter erase(), the vector elements are :"<<endl;
    for(int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";
    return 0;
}
