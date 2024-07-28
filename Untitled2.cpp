//#include<iostream>
//#include<array>
//using namespace std;
/*int main()
{
    //normal array
    //int a[]={};

    //STL array
    array<int,4> a={3,4,2,7};
    int size= a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {

        cout<<a[i]<<endl;

    }
    cout<<"elements of index="<<a.at(3)<<endl;
    bool truefalse= a.empty();
    cout<<"true or false="<<truefalse;
    bool empty = a.empty();
    cout<<"is array empty or not??"<<empty;
    cout<<"first element"<<a.front()<<endl;
    cout<<"last element"<<a.back()<<endl;



}

*/


/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a ={1,2,2,4};

    array<int,4> b = {3,4,1,6}; //STL array

    for(int i =0;i<b.size();i++)
    {
        cout<<b.at(i)<<endl;
    }

    cout<<"Last element : "<<b.back()<<endl;

    cout<<"First element: "<<b.front()<<endl;

    a.swap(b);

    cout<<"After swapping: "<<endl;

    for(int i =0;i<b.size();i++)
    {
      cout<<b.at(i)<<endl;
    }

    if(b.empty())
    {
        cout<<"Array empty"<<endl;
    }
    else{
        cout<<"Array not empty"<<endl;
    }
    int ele=2,c=0;

     for(int i =0;i<b.size();i++)
    {
      if(b[i]==ele)
      {
          c++;
      }
    }
    cout<<ele<<" occurs "<<c<<" times"<<endl;


}
*/

/*
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> a={3,4,7,2,7};
    int size=a.size();
    cout<<size<<endl;
    cout<<"Original Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int c = count(a.begin(), a.end(), 7);
    if (c == 2) {
        cout << "Element 7 occurs 2 times" << endl;
    }

    return 0;
}
*/


//deque means you can perform push and pop operations from both ends
//insertion

/*
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    // Insertion
        d.push_back(10);
    d.push_front(11);
    for (int i:d){
        cout<<i<<" ";
    }
    // Delete
    d.pop_back();
    for (int i:d){
        cout<<i<<" ";
    }
    // Delete from front
    d.pop_front();
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;
    cout<<"Empty or not: "<<d.empty()<<endl;
    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase: "<<d.size()<<endl;
    return 0;
}
*/



//16-07-2024  WEEK 2 DAY 2
//STL - collection of library/algo function and other component data structures to simplify /development the c++ programming
//container- used to store thee data in a sequential manner
//#include<iostream>
//#include<stack>
//#include<queue>
//using namespace std;


/*int main(){
stack<string >s;
s.push("ajay");
s.push("ajab");
s.push("gajab");
s.push("sabaj");
cout<<"top element"<<s.top()<<endl;
s.pop();
cout<<"element after pop"<<s.top()<<endl;
return 0;
}*/


/*int main(){
queue<string >q;
q.push("abha");
q.push("saha");
q.push("mabha");
cout<<"size of queue is"<<q.size()<<endl;
cout<<"front data element"<<q.front()<<endl;
for(int i=0;i<3;i++)
{

    cout<<q.front()<<endl;
    q.pop();
}

}*/
/*

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>prices={5,7,8,4,9};
    int minsofar=prices[0];
    int ans=0;
    for(int i=0;i<prices.size();i++)
        {

    int profit=prices[i]-minsofar;
    if(profit>ans)
    {
        ans=profit;
    }
    minsofar=min(prices[i],minsofar);
    }
    return ans;
    }

    */



//////PRACTICE SESSIONS
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    // Display the array elements
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/


/*
#include <iostream>
using namespace std;

int countMultiplesOf3(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0) {
            ++count;
        }
    }
    return count;
}
/*
int main() {
    int arr[] = {3, 5, 9, 12, 14, 18};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countMultiplesOf3(arr, size);
    cout << "The count of multiples of 3 is: " << result << endl;

    return 0;
}
*/




//////------------------------------------------------
/*bitbucket- github - gitlab
domain name  eg: mohit.com
once you create the code for website
code: html,java script
space:upload the webpages in to this space
make a website
upload on github

STL ARRAY
array,list
similarities of array and list- possible to enter duplicate element
cannot add duplicate element on the set
*/

/*#include<iostream>
#include<set>
using namespace std;

int main()
{


set<int>s;
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);
s.insert(0);

for(auto i:s){
    cout<<i<<endl;
}
cout<<endl;


set<int>::iterator it=s.begin();
it++;
s.erase(it);
 //for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
  //      cout << *it << endl;


for(auto i:s){
    cout<<i<<endl;
}
cout<<endl;

cout<<"is present:"<<s.count(7)<<endl;

set <int>::iterator itr=s.find(5);

for(auto it=itr;it!=s.end();it++)
{
    cout<<*it<<" ";//this is pointers

}
cout<<endl;
}
*/


//------------------------
#include<iostream>
#include<map>
using namespace std;
//stored the data in key value pair
int main()
{

    map<int,string>m;
    //1 is key and ajay is value
    m[1]="ajay";
    m[2]="sanjay";
    m[3]="manjay";
    m.insert({5,"ankita"});
    for(auto i:m)
    {

        //expression can not be used as a function
        //i.first() dont write this way
        cout<<i.first<<" "<<i.second<<" " <<endl;

    }
    cout<<"find the element"<<m.count(-13)<<endl;

    m.erase(5);
    cout<<"after erase"<<endl;
    for(auto i:m)
    {

        cout<<i.first<<" "<<i.second<<" " <<endl;
    }
    //find the element from mappp
}
