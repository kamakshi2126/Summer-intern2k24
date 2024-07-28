#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Apple");
    s.push("Banana");
    s.push("Cherry");
    s.push("Dragon Fruit");
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element After Top: "<<s.top()<<endl;
}