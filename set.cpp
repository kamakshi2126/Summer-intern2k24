#include<iostream>
#include<set>
using namespace std;
int main()
{
    // nop duplicate values
    // order - values in sorted order
    set<int> s;
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // find the element: is element present in set or not
    cout<<"Is present "<<s.count(1)<<endl;
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";//this is pointers
    }
    cout<<endl;
}