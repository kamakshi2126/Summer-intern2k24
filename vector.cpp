#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    //cout<<v.size();
    v.reserve(10);     // reserves the capacity if cap more than cur_cap does nothing else then the cur_cap is increased to cap.
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        cout<<"Capacity: "<<v.capacity()<<endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity(); 
    //v.pop_back();
    v.insert(v.begin()+1,5);
    cout<<endl;
    for(int b:v)
    {
        cout<<b<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<v.size()<<endl;
    //v.reserve(10);
    cout<<"Front element: "<<v.front()<<endl;
    cout<<"Back element: "<<v.back()<<endl;
    cout<<"Element at index 2: "<<v.at(2)<<endl;
    cout<<"Size: "<<v.size()<<endl;
    //v.shrink_to_fit();    // If the size is less than the capacity, this call may reduce the capacity to equal the size.
    cout<<"Size: "<<v.size()<<endl;
    v.clear();
    cout<<"Size: "<<v.size()<<endl; 
    cout<<"Capacity: "<<v.capacity(); 
}