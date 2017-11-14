#include<iostream>
#include<fstream>
using namespace std;
struct item
{
   double p;
   double w;
};
int main()
{
    struct item a[100],x,temp;
    int cap,e,current_weight=0,current_profit=0;
    freopen("input.txt","r",stdin);
    cin>>e>>cap;
    for(int i=0;i<e;i++)
    {
        cin>>x.p>>x.w;
        a[i]=x;
    }
    for(int i=e-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            double r1=a[j].p/a[j].w;
            double r2=a[j+1].p/a[j+1].w;
            if(r1<r2)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<e;i++)
    {
        if(current_weight+a[i].w<=cap)
        {
        current_weight+=a[i].w;
        current_profit+=a[i].p;
        }
        else
        {
            double rem=cap-current_weight;
            current_profit+=a[i].p*rem/a[i].w;
        }
    }
    cout<<"Maximum Profit is:"<<current_profit<<endl;
    return 0;
}
