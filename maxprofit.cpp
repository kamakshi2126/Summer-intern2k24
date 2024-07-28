#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        //ios_base::sync_with_stdio(false); 
		//cin.tie(NULL); 
		//cout.tie(NULL);
		int pro=0;
		for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1])
            {
                pro+=prices[i]-prices[i-1];
            }
		}
		return pro;
    }
int main()
{
    vector<int> prices;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        prices.push_back(a);
    }
    cout<<endl;
    int res=maxProfit(prices);
    cout<<res;
};

// 7 1 5 3 6 4 - 7