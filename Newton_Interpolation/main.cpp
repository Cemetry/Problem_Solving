/*
**Author:Tanim Ahmed Bijoy
Kuet,khulna,Bangladesh
***Newton_interpolation.cpp
**/
#include<iostream>
using namespace std;
int main()
{
    int n,n1,i,j;
    float x[100],f[100],point,sum=0,mult;
    cout<<"Enter the number of data?"<<endl;
    cin>>n;

    cout<<"Enter the corresponding value of x and f(x)"<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i]>>f[i];
    cout<<"Enter the point for calculation"<<endl;
    cin>>point;
    for(j=0;j<n-1;j++)
    {
        for(i=n-1;i>j;i--)
            f[i]=(f[i]-f[i-1])/(x[i]-x[i-j-1]);
    }
    for(i=n-1;i>=0;i--)
    {
        mult=1;
        for( j=0;j<i;j++)
            mult*=(point-x[j]);
        mult*=f[j];
        sum+=mult;
    }
    cout<<"The solution for the given value is"<<sum<<endl;
    return 0;
}
