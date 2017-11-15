#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the two numbers"<<endl;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;
    //without third variable
    /*x=x+y;
    y=x-y;
    x=x-y;
    */
    //with third variable
   /* int temp;
    temp=x;
    x=y;
    y=temp;
    */
    //with division multiplication and division
   /* if(x==0||y==0)
        cout<<"Not possible"<<endl;
    x=x*y;
    y=x/y;
    x=x/y;
    */
    //with xor
    x=x^y;
    y=x^y;
    x=x^y;
    cout<<"X:"<<x<<" "<<"Y:"<<y<<endl;
    return 0;
}
