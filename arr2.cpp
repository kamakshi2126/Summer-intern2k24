#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int sum=0;
    for(auto x:a)
    sum+=x;
    cout<<sum<<endl;
    int user_input;
    cout<<"Enter the number you want to search for in the array : ";
    cin>>user_input;
    int counter=0;
    for(auto x :a)
    {
        if(x==user_input)
        {
            cout<<"Number "<<user_input<<" is found at the location : "<<counter;
            exit(0);
        }
        counter++;
    }
    cout<<"Not Found!";
    return 0;
}