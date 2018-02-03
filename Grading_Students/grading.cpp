#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n<38)
        {

            cout<<n<<endl;
        }
         else if(abs(n-(n+(5-(n%5))))<3)
         {
              cout<<n+(5-(n%5))<<endl;
         }

        else
            cout<<n<<endl;
    }
    return 0;
}

