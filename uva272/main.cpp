/*#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long int i,cnt=0;
    char s[1000];
    while(gets(s))
    {
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
             if(s[i]=='"')
            {
                cnt++;
                if(cnt%2==1)
                    cout<<"``";
                else
                    cout<<"''";

            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,cnt=0;
    char a[1000];
    while(gets(a))
    {
        int len=strlen(a);
        for(int i=0;i<len;i++)
        {
            if(a[i]=='"')
            {
                cnt++;
                if(cnt%2==1)
                    cout<<"``";
                else
                    cout<<"''";
            }
            else
            {
                cout<<a[i];
            }

        }
        cout<<endl;
    }
    return 0;
}
