#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n][n];
  for(int i= 0;i<n; i++)
    for(int j = 0; j<n;j++)
    cin>>m[i][j];
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++)

        for(int j = 0; j<n; j++)
        {
            if (i == j) sum+=m[i][j];

            if(i+j==n-1) sum1+=m[i][j];

        }
        cout<<abs(sum1-sum)<<endl;

    return 0;
}
