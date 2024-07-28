#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> c;
    string s;
    cin>>s;
    for(char i: s)
    {
        switch(i)
        {
            case '(':
            c.push(i);
            break;
            case ')':
            if(c.empty()!=1 && c.top()=='(')
            {
                c.pop();
            }
            else
            {
                c.push(i);
            }
            
            break;
            case '[':
            c.push(i);
            break;
            case ']':
            if(c.empty()!=1 && c.top()=='(')
            {
                c.pop();
            }
            else
            {
                c.push(i);
            }
            break;
            case '{':
            c.push(i);
            break;
            case '}':
            if(c.empty()!=1 && c.top()=='(')
            {
                c.pop();
            }
            else
            {
                c.push(i);
            }
            break;
        }
    }
}