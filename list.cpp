#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(5);
    l.push_front(10);
    l.push_back(15);
    l.push_front(10);
    cout<<"\nSize of list: "<<l.size()<<endl;
    cout<<endl;
    cout<<"Original: ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"\nAfter resizing: ";
    l.resize(3);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"\nReversed: ";
    l.reverse();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Unique Elements: ";
    l.unique();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase: ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<"\nSize of list: "<<l.size()<<endl;
}

// unique
// reverse
// resize