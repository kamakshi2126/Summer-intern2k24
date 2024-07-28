/*
1) A student will not be allowed to sit in exam if his/her attendence is less
than 75%.
Take following input from user:
 Number of classes held
 Number of classes attended.
And print:
 percentage of class attended
 Is student is allowed to sit in exam or not.
*/
#include<iostream>
using namespace std;
int main()
{
    int class_held, class_attend;
    float percentage;
    cout<<"Classes held"<<endl;
    cin>>class_held;
    cout<<"Classes attend"<<endl;
    cin>>class_attend;
    percentage = ((class_attend*1.0)/(class_held*1.0))*100;
    cout<<"Attendance Percentage = "<<percentage<<"%"<<endl;
    if(percentage>=75)
    {
        cout<<"Student is allowed to sit in the exam"<<endl;
    }
    else
    {
        cout<<"Student is not allowed to sit in the exam"<<endl;
    }
}