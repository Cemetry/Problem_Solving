#include<iostream>
using namespace std;
bool ispower(int n)
{
    if(n==0)
        return 0;//no
    while(n!=1)
    {
        if(n%2!=0)
            return 0;//no
        n=n/2;
    }
    return 1;//yes
}

int main()
{
 int n;
 cout<<"Enter the number"<<endl;
 cin>>n;
 cout<<"Check the number if the number is power of two"<<endl;
 cout<<ispower(n)<<endl;
 return 0;
}
