/*Anagram Checking.cpp
*/
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string a,string b)
{
    int n1,n2;
    n1=a.length();
    n2=b.length();
    if(n1!=n2)
    return false;
sort(a.begin(),a.end());
sort(b.begin(),b.end());
for(int i = 0; i < n1; i++)
{
    if(a[i]!=b[i])
        return false;
}
return true;
}
int main()
{
    string a,b;

    //input
    while(cin >> a >> b){
        if(isAnagram(a,b))
        cout<<"YES";
    else
        cout << "NO";
    }


    return 0;
}
