#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> arr = {20, 40, 60, 80, 100};
    cout<<"Elements in arr, using at() = ";
    for(int i = 0; i < 5; i++)
        cout<<arr.at(i)<<" ";
    cout<<"Elements in arr, using index no = ";
    for(int i = 0; i < 5; i++)
        cout<<arr[i]<<" ";
    cout<<"\nNo of elements in arr, size() = "<<arr.size()<<endl;
    cout<<"\nFirst element in arr, front() = "<<arr.front()<<endl;
    cout<<"\nLast element in arr, back() = "<<arr.back();
    return 0;
}
