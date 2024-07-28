#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // another way to create vector
    vector<int> v(5,2);
    for(int a:v)
    {
        cout<<a<<" ";    
    }
}