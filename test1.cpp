#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Displaying Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}