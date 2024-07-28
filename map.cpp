#include<iostream>
#include<map>
using namespace std;
// stores the data in key value pair
int main()
{
    map<int,string> m;
    // 1 is the key and Name is the value
    m[1]="Ajay";
    m[2]="Nanjay";
    m[4]="Manjay";
    m.insert({5,"Antika"});
    for(auto i:m)
    {
        //expression can not be used as a function
        // i.first() don't write this way
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<"Find the element "<<m.count(-13)<<endl;
    m.erase(5);
    cout<<"After erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    //find the element from map
    auto findele=m.find(4);
    for(auto i=findele;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}