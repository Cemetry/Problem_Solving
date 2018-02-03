#include<iostream>
using namespace std;
int main()
{
    int n,m;
    //where n defines number
    //where m defines nearest multiple
    //there will be two previous and next
    while(cin>>n>>m)
    {
        cout<<"Previous multiple"<<n-(n%m)<<endl;
        cout<<"next mulitple"<<n+(m-n%m)<<endl;
    }
    return 0;
}

