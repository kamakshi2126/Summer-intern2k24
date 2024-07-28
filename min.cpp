#include<iostream>
#include<array>
using namespace std;
int func(array<int,7>& a)
{
    int minn=a[0];
    int ans=0;
    for(int i=1;i<a.size();i++)
    {
        int profit=a[i]-minn;
        if(profit>ans)
        {
            ans=profit;
        }
        minn=min(a[i],minn);
    }
    return ans;
}
int main()
{
    array<int,7> a={7,6,4,3,1,2,5};
    int res=func(a);
    cout<<res; 
}
/*

array<int,7> a={7,6,4,3,1,2,5};
    int n=a.size();
    int min=INT_MAX;
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {func
            min=a[i];
        }
        maxx = max(maxx, a[i] - min);
    }
    cout<<maxx<<endl;
}




ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=prices.size();
        int min=INT_MAX;
        int maxx=0;
    for(int i=0;i<n-1;i++)
    {
        if(prices[i]<min)
        {
            min=prices[i];
        }
            maxx=max(maxx,prices[i+1]-min);
    }
    return maxx;




    chetna
    if(mx<(prices[i]-min))
    }*/