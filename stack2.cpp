#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int choice;
    cout<<"Menu\n1. Size of the Stack\n2. Insert Element into the Stack\n3. Delete Element from the Stack\n4. Top Element of the Stack\n5. Exit ";
    while(choice!=5)
    {
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
    {
        case 1:
        cout<<"\nSize of the Stack is: "<<s.size()<<endl;
        break;
        case 2:
        int x;
        cout<<"Enter an element to insert into the stack: ";
        cin>>x;
        s.push(x);
        break;
        case 3:
        if(s.empty())
        {
            cout<<"Stack Empty! Cannot pop elements";
        }
        else
        {
            s.pop();
            cout<<"\nElement Deleted"<<endl;
        }
        break;
        case 4:
        if(s.empty())
        {
            cout<<"Stack Empty! So No Top Element";
        }
        else
        {
            cout<<"Top Element: "<<s.top()<<endl;
        }
        break;
        case 5:
        break;
    }
    }
    
}