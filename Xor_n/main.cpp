#include<iostream>
#include<algorithm>
using namespace std;
int xor_n(int n)
{
    if(n%4==0)
        return n;
    if(n%4==1)
        return 1;
    if(n%4==2)
        return n+1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"XOR From 1 to n"<<endl;
    cout<<xor_n(n)<<endl;
    //cout<<(1^2^3^4^5)<<endl;
    return 0;

}
