#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void insertionsort(vector<int>& arr)
{
    for(size_t i=1;i<arr.size();i++)
    {
        int key =arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}
void selectionsort(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++) 
    { 
    int z=i;    
    for(int j=i+1;j<arr.size();++j)
    {
        if(arr[j]<arr[z])
        {
            z=j;
        }
    }
    swap(arr[i],arr[z]);
    }
    cout<<"\nSorted Array : Selection Sort"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubblesort(vector<int>& arr)
{
    for(int i=0;i<arr.size()-1;i++)      //n-1 time
    for(int j=0;j<arr.size()-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Sorted Array : Bubble Sort"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
void mergesort(vector<int>& arr)
{
    stable_sort(arr.begin(),arr.end());
    cout<<"Sorted Array : Merge Sort"<<endl;
    for(int num:arr)
    {
        cout<<num<<" ";
    }
}
int main()
{
    vector<int> arr={5,2,4,6,1,3};
    int choice=0;
    char ch='y';
    do
    {
        cout<<"\n------Sorting------\n1. Insertion sort\n2. Selection Sort\n3. Bubble Sort\n4. Merge Sort\n5. Exit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"\nOriginal Array"<<endl;
                for(int i:arr)
                {
                    cout<<i<<" ";
                } 
                cout<<endl;
                insertionsort(arr);
                cout<<"Sorted Array : Insertion Sort"<<endl;
                for(int i:arr)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                break;
            }
            case 2:
            {
                cout<<"\nOriginal Array"<<endl;
                for(int i:arr)
                {
                    cout<<i<<" ";
                } 
                cout<<endl;
                selectionsort(arr);
                cout<<endl;
                break;
            }
            case 3:
            {
                cout<<"\nOriginal Array"<<endl;
                for(int i:arr)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                bubblesort(arr);
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<"\nOriginal Array"<<endl;
                for(int i:arr)
                {
                    cout<<i<<" ";
                } 
                cout<<endl;
                mergesort(arr);
                cout<<endl;
                break;
            }
            case 5:
            cout<<"Exiting";
            break;
            default:
            cout<<"Invalid choice"<<endl;
            cout<<"Do you want to enter choice again?\nEnter 'Y' to continue and any other key to exit"<<endl;
            cin>>ch; 
        }  
    } while(choice!=5 && (ch=='Y' || ch=='y'));

}