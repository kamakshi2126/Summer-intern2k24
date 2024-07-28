#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("one");
    q.push("two");
    q.push("three");
    cout<<"Front Element: "<<q.front()<<endl;
    q.pop();
    cout<<"Front Element after pop: "<<q.front()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    cout<<"Back Element: "<<q.back()<<endl;
    cout<<endl;
    for(int i=0;i<q.size();i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}