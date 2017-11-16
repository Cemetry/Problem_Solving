
/*
*****Lagrange Interpolation
********Author:
                 Tanim Ahmed
****************************/
#include<iostream>
#include<fstream>
using namespace  std;
int main()
{
    int n1,n2;
    double x[10],fx[10];
    freopen("input.txt","r",stdin);
    cout<<"Enter the number of data:"<<endl;
    cin>>n1;
    cout<<"Enter the corresponding weightue of x and f(x)"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>x[i]>>fx[i];
    }
    cout<<"Enter the order number"<<endl;
    cin>>n2;
    if(n2>=n1)
    {
        cout<<"There is no solution for the order"<<endl;
        return 0;
    }
    double point;
    double ans=0.0;
    cout<<"Enter the point"<<endl;
    cin>>point;
    for(int i=0;i<n1;i++)
    {
        double l=1.0;
        for(int j=0;j<n1;j++)
        {
            if(i!=j)
            {
                l*=(point-x[j])/(x[i]-x[j]);
            }
        }
        ans+=l*fx[i];
    }
    cout<<"The weightue for the this point is "<<":"<<ans<<endl;
    return 0;
}
