/*#include<iostream>
using namespace std;

int main()
{


    int x=10;
    int y=20;
    auto add=[=](int a){
    return x+y+a;
    };
    cout<<"sum"<<add(5)<<endl;
    //output sum 35

    auto addbyref=[&x,&y](int a){
    x=30;
    return x+y+a;
    };

}
*/



/*#include<iostream>
#include<vector>
#include<algorithm>
int main(){

vector<int>numbers={5,3,8,1,4};
sort(numbers.begin(),numbers.end(),[](int a,int b){
     return a<b;
     });
     */


/*#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> numbers={1,2,3,4,5};
//using for each with lambda to print each element
for(auto int i:v){

}
    */



//---------------------------------------------------------------------------------
/*#include<iostream>
#include<vector>
#include<numeric>// for std::accumulate
int main()
{

    std::vector<int> numbers ={1,2,3,4,5};
    //using std ::accumulate with a lambda to sum up the elements
    //int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total,int n) {
     //                  return total +n;
                      // });
                      for(int i)
                       std::cout<<"sum:"<<sum<<std::endl;//output:sum:15
                       return 0;
}
*/

/*#include<iostream>
#include<vector>
#include<string>
#include<numeric>
int main()
{

    std::vector<std::string>words = {"hello","world","from","c++"};
    //using std::accumulate with a lambda to concatenate strings
    std::string result = std::accumulate(words.begin(),words.end(),std::string(""))
}'
*/





/*#include <iostream>
#include <string>

void countDigits(const std::string& input) {
    int digitCount[10] = {0};  // Array to store count of each digit (0-9)

    // Count occurrences of each digit
    for (char ch : input) {
        if (isdigit(ch)) {
            digitCount[ch - '0']++;
        }
    }

    // Print the count of each digit
    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] > 0) {
            std::cout << "Number " << i << " is " << digitCount[i] << " time(s)" << std::endl;
        }
    }

    // Check for digits that appear exactly 2 times
    bool found = false;
    std::cout << "\nNumbers that appear exactly 2 times:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] == 2) {
            std::cout << "Number " << i << " appears 2 times" << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No numbers found that appear exactly 2 times." << std::endl;
    }
}

int main() {
    std::string input = "jhondoe14@gamil.com";
    countDigits(input);
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------
/*week 3 day 1
recap:
    stl
    lambda function-function without name
    feature- one line expression
    lambda and for each
    accumulator
    lambda with find if
    lambda with mutable



    storage classes
    used to define the scope and lifetime of variables or functiond within the program
    major storage classes are::
        auto-local to the block in which it is defined
        lifetime:automatically destroyed when the block is exited
        register
        static - for variables within a function:local to the function but retains its value between function cells
        for variable within a file:file scope,visibility only within the file
            limitation-exists for the duration of the program

        extern - global,the variable or function is visible across multiple files
        lifetime- exists for the duration of the program
        mutable-used in classes -used in lambda function but lambda function also in classes
        limitation- as per the containing object


*/


/*#include<iostream>
using namespace std;
int main(){
    auto x=100;
    cout<<x<<endl;
}*/

/*#include<iostream>
using namespace std;
int main(){
static int count=0;
count++;
cout<<"count:"<<endl;
}
*/

/*#include<iostream>
#include<vector>

using namespace std;

void insertionsort(std::vector<int>& arr)
{

    for(size_t i =1;i<arr.size();i++)
    {

        int key = arr[i];
        int j=i-1;
        while(j>=0;&&arr[j]>key){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}
int main()
{

    vector<int>arr= {5,2,4,6,1,3};
    insertionsort(arr);
    for(int num:arr){
        cout<<num<<" ";

    }
    return 0;
}

*/










//-------------------------------------------------------------------------------------------
//quick sort-



/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    vector<int>arr={10,7,8,9,1,5};
    //using sort from STL to sort the array
    sort(arr.begin(),arr.end());
    cout<<"sorted array:";
    for(int num:arr)
    {

        cout<<num<<" ";

    }
    return 0;

}
*/

///--------------------------------------------------------------
/*#include<iostream>
#include"myheader.h"
using namespace std;
void demo::input(){
cout<<"enter ";
cin a<<b;
}
void demo::show(){
cout<<"\n"<<a<<}
*/



///------------------------------------------------------------------------------
//define a structure to represent a person
//structure stored in different memory locations
//union store all the data member in same memory locations

/*#include<iostream>
using namespace std;

int main(){
//declaration and initialization of 2D array
int arr[3][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};
//accessing elements
for(int i=0;i<3;++i)
{
    for(int j=0;j<4;++j){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;

}

}
*/

#include <iostream>

#include <string>

#include<set>

using namespace std;

int main() {

  string str = "Hello, World!";

  cout << "Length: " << str.length() << endl;

  cout << "Size: " << str.size() <<endl;

  //insert

   str.insert(7, "World");

  cout << "Inserted string: " << str <<endl;

 return 0;

 //erase

 str.erase(5, 7); // Erase ", World"

  cout << "Erased string: " << str <<endl;

}

//find

int main() {

  string str = "Hello, World!";

  size_t pos = str.find("World");

  if (pos != string::npos) {

    cout << "'World' found at position: " << pos <<endl;

  } else {

    cout << "'World' not found." << endl;

  }

  return 0;

}

//compare

int main() {

  string str1 = "Hello";

  string str2 = "World";

  int result = str1.compare(str2);

  if (result == 0) {

    cout << "Strings are equal." <<endl;

  } else if (result < 0) {

    cout << "str1 is less than str2." << endl;

  } else {

    cout << "str1 is greater than str2." << endl;

  }

  return 0;

}

//find the duplicate elem in string

}








































































































