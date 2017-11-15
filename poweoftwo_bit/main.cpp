#include<iostream>
using namespace std;
bool ispower(int n)
{
    return n&&(!(n&(n-1)));
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cout<<"If the result is 1 it is power of two"<<endl;
    cout<<"IF the resulf is 0 it is not power of two"<<endl;
    cin>>n;
    cout<<ispower(n)<<endl;
    return 0;
}
