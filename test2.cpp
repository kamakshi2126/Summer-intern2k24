#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }
    int max=0;
    for(int i:l)
    {
        if(i>max)
        {
            max=i;
        }
    }
    cout<<"Maximum Element: "<<max;
}