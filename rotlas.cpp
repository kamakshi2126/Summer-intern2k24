#include<iostream>
#include<deque>
using namespace std;
int main()
{/*
    deque<int> arr={1,2,3,4,5,6,7};
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=arr.size()-1;i>0;i--)
    {
        for(int j=i;j<arr.size();j++)
        {
            cout<<arr[j]<<" ";
        }
        for(int j=0;j<i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
    }*/
   deque<int> arr={1,2,3,4,5,6,7};
    for(int i=0;i<arr.size();i++)
	{
		
		for(int n: arr)
		{
			cout<<n<<" ";
		}
		cout<<endl;
		int x=arr.back();
		arr.pop_back();
		arr.push_front(x);
       
	}
}
/*








#include<iostream>
#include<deque>
#include "D:\Summar Training 2024\headerfiles\create_vector.h"
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
using namespace std;
int main(){
	vector<int> arr={1,2,3,4};
	
	for(int i:arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=arr.size()-1;i>0;i--)
	{   
		for(int j=i;j<arr.size();j++){
			cout<<arr[j]<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<arr.size();i++)
	{
		
		for(int n: arr)
		{
			cout<<n<<" ";
		}
		cout<<endl;
		int x=arr.back();
		arr.pop_back();
		arr.push_front(x);
	}*/
	
/*

int n=nums.length;
k=k%n;
reverse(nums,0,n-1);
reverse(nums,0,k-1);
reverse(nums,k,n-1);

void reverse(u=int nums[],int start, int end)
{
int i=start,j=end;
while(i<j)
{
    int temp=nums[i];
    nums[i]=nums[j];
    nums[j]=temp;
    i++;
    j--;
}}

*/