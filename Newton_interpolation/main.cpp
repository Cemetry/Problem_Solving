//newton interpolation.cpp
/*
***Author:Tanim Ahmed
****Date:9.50
*****
*/
#include<iostream>
using namespace std;
int main()
{
    float x[10],fx[10],sum=0,mult;
    int i,j;
    int n1,n2;
    cout<<"Enter the number of data:"<<endl;
    cin>>n1;
    cout<<"Enter the corresponding value for x and f(x)"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>x[i]>>fx[i];
    }
    cout<<"Enter the order:"<<endl;
    cin>>n2;
    if(n2>=n1)
    {
        cout<<"There is no possible solution:"<<endl;
        return 0;
    }
    for(j=0;j<n1-1;j++)
    {
        for(i=n1-1;i>j;i--)
            fx[i]=(fx[i]-fx[i-1])/(x[i]-x[i-j-1]);
    }
    cout<<"Enter the point:"<<endl;
    float point;
    cin>>point;
    for(i=n1-1;i>=0;i--)
    {
        mult=1;
        for(j=0;j<i;j++)
            mult*=(point-x[j]);
        mult*=fx[j];
        sum+=mult;
    }
    cout<<"The result for the value:"<<sum<<endl;
    return 0;
}
