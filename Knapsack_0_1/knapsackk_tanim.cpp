#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int W;
    cout<<"Enter the number of item"<<endl;
    cin>>n;
    cout<<"Enter the value of capacity"<<endl;
    cin>>W;
    int wt[n+1];
    int v[n+1];
    int dp[n+1][W+1];
    cout<<"Weight"<<endl;
    for(int i=0;i<n;i++)
        cin>>wt[i];
    cout<<"Value"<<endl;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int item=0;item<=n;item++)
    {
        for(int w=0;w<=W;w++)
        {
            if(item==0||w==0)
            {
                dp[item][w]=0;
            }
            else if(wt[item-1]<=w)
            {
                dp[item][w]=max(v[item-1]+dp[item-1][w-wt[item-1]],dp[item-1][w]);

            }
            else
            {
                dp[item][w]=dp[item-1][w];
            }
        }
    }
    for(int i=0;i<=W;i++)
    {
        if(dp[n][i]==dp[n][W])
        {
            cout<<"Weight"<<i<<" "<<"Profit"<<dp[n][W]<<endl;
            break;
        }
    }
    return 0;

}
