#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int target;
    cin>>target;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
       {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]+v[j]==target)
            {
                
            }
        }
       } 
       

}