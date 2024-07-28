#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<string> words={"Hello", "world", "from", "C++"};
    // using accumulator with a lambda to concatenate strings
    string result=accumulate(words.begin(), words.end(),string(""),[](const string& total, const string& word)
    {
        return total+(total.empty()? " ":" ")+word;
    });
    cout<<"Concatenated string: "<<result<<endl;
}
// write a program to find the duplicate number from string
// let's say string john12doe14@gmail118.com