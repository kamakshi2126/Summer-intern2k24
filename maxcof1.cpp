#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,13> a={1,0,1,0,1,1,1,1,0,1,1,1};
    int sum=0;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==1 && a[i]==a[i+1])
        {
            sum++;
        }
    }
    cout<<"Number of consecutive 1s: "<<sum<<endl;
}
/*
class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
  int sum=0,mSum=0;
  for(int i=0;i<nums.size();i++)
  {
   if(nums[i]==0)
   {
    sum=0;
   }
   else{
    sum+=1;
    if(sum>mSum)
     mSum=sum;
   }
  }
  return mSum;
 }
};
--------------------
class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
  // int arr[6];
  // int size = sizeof() / sizeof(arr[0]);
  int max_sum = 0;
  int current_sum = 0;
  for (int i = 0; i < nums.size(); i++) {
   if (nums[i] == 1) {
    current_sum = current_sum + nums[i];
    if (current_sum > max_sum) {
     max_sum = current_sum;
    }
   } else {
    current_sum = 0;
}

  }
  return max_sum;
 }
};
--------------
class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
 int count=0,max=0;
 int s=0,e=0,n=nums.size();
 while(s<n && e<n){
  if(nums[s]==1){
   e=e+1;
   while(e<n && nums[e]==1){
    e++;
   }
  }
  count=e-s;
  if(count>max){
   max=count;
  }
  s=e+1;
  e=e+1;
 }
  return max;
 }
};
------------

*/