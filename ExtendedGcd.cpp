#include<iostream>
#define i64 long long int
using namespace std;
i64 ex_euclid(i64 a,i64 b,i64 &x,i64 &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    i64 xx,yy;
    i64 g=ex_euclid(a,a%b,xx,yy);
    x=yy;
    y=xx-yy*(a/b);
    return g;
}
int main()
{
    i64 a,b,x,y;
    cin>>a>>b;
    i64 gcd=ex_euclid(a,b,x,y);
    cout<<x<<" "<<y<<" "<<gcd<<endl;
    return 0;
}
