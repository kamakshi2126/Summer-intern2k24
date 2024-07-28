#include<iostream>
using namespace std;
class A
{
    int age;
    int per;
    string name;
    public:
    void setData()
    {
        // without using namespace we have to write std before any function like cout and cin
        // std::cout<<"Example";dcgvtyhzgzxTFRDCA
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter how many people are there: ";
        cin>>per;
        cout<<"Enter name: ";
        cin.ignore();    // to avoid the issue of consuming an extra input line else always call string then integer
        getline(cin,name);   // in order to get a string with space like next and nextline
    }
    void getData()
    {
        cout<<age<<" "<<per<<" "<<name;
    }
};
int main()
{
    A ob;
    ob.setData();
    ob.getData();
}