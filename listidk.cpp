#include<iostream>
#include<list>
using namespace std;
int main()
{
    /*int i=10;
    cout<<i<<endl;
    cout<<&i<<endl;
    cout<<*(&i)<<endl;*/
    int i=10;
    int *j=&i;
    cout<<j<<endl;
    cout<<&j<<endl;
    cout<<*(j)<<endl;
  
    cout<<j<<endl;
    

    const char * message  {"Hello World!"};
    cout<<"message: "<<message<<endl;
    //*message = "B"; Compiler Error
    cout<<"message: "<<*message<<endl;
    // Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0]='B';
    cout<<"message1: "<<message1<<endl;
}