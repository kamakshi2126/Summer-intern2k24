#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,3,5,7,9};
    cout<<"Completely Initialised Int Array A : "<<endl;
    for(int x : a) // For each loop very easy and important for Array data struture
                    // Read as for x in array A
    // For each loop iterates through elements of the array. Introduced in C++11.
    cout<<x<<endl;
    cout<<endl;

    int b[6]={1,3,5};   // Keeping the array incomplete to see what is the outcome result.
    cout<<"Partial Initialisation Int Array B : "<<endl;
    for(int y : b) // Shows thaat for each loop will work according to size of the array and not according to number of elements initialisation int the array.
    cout<<y<<endl;
    cout<<endl;

    float c[6]={1.2, 2.4, 3.6, 48.54, 99.48, 54.88};
    cout<<"Completely Initialisation Float Array C : ";
    for(float z: c)
    cout<<z<<endl;
    cout<<endl;

    float d[6]={12.6,82.4, 43.6, 4.54, 77.48, 84.88};  // No need to know the type of the array
    cout<<"Completely Initialised Flaot Array D with Auto : "<<endl;
    for(auto z: d)
    cout<<z<<endl;
    cout<<endl;

    char e[5]={'A',66,'C',68,'E'}; //NO need to know the type of the array
    cout<<"Completely Initailised Char Array E with auto : "<<endl;
    for(auto z : e)
    cout<<z<<endl;
    cout<<endl;

}