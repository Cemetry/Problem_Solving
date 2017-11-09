/***
///wavesort
TANIM AHMED
***/
#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    cout<<"simple sorting is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i+=2)
    {
        swap(&v[i],&v[i+1]);
    }
     cout<<"The waveform sort is "<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
    return 0;
}
/*
simple input and output
6
0 2 3 1 6 5
simple sorting is
0 1 2 3 5 6
The waveform sort is
1 0 3 2 6 5
Process returned 0 (0x0)   execution time : 7.016 s
Press any key to continu
*/
