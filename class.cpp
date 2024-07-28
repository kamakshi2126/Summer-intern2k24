#include<iostream>
#include<string>
using namespace std;
class person{
    char name[20];   //data member
    int id;
    public:
        void getDetail()      //member function 
        {
            cout<<"detail is as follows";
        }
};
class Teacher{
    private:    
        double salary;   //data hiding
    public:
        string name;
        string dept;
        //double salary
        string subject;
        void changeDept(string newDept)
        {
            dept=newDept;
        }
        //getter and setter methods - to access the private variables
        void setSalary(double s)
        {
            salary=s;
        }
        double getSalary()
        {
            return salary;
        }
        //constructor
        Teacher()
        {
            cout<<"Constructor is being called "<<endl;
        }
        Teacher(string s, string d, string sub, double sal)
        {
            this->name=name;          // to access the object properties, then use this keyword
            this->dept=dept;
            this->subject=subject;
            this->salary=salary;
            /*name=s;
            dept=d;
            subject=sub;
            salary=sal;
            
            this->name=name;           to access the object properties, then use this keyword
            this->dept=dept;
            this->subject=subject;
            this->salary=salary;*/
        }
        void getInfo()
        {
            cout<<"Teacher name: "<<name<<endl;
            cout<<"Teacher dept: "<<dept<<endl;
            cout<<"Teacher subject: "<<subject<<endl;
            cout<<"Teacher Salary: "<<salary<<endl;
        }
};
int main()
{
    person p1;    // creating object
    //p1.getDetail();
    //p1.id=12;

    Teacher t1;
    t1.name="sarang";
    t1.subject="maths";
    t1.changeDept("CSE");
    //cout<<t1.name<<endl;
    t1.setSalary(4500);
    t1.getInfo();
    //cout<<t1.getSalary();
    cout<<endl;
    Teacher t2("Me","Laze Around", "Time Waste", 999999);
    t2.getInfo();
}