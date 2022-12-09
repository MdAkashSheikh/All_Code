#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=1;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%7==0 || n%7==1)
        {
            cout<<"Case "<<i<<": Oh no, my eggs! :("<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No eggs for you! :D"<<endl;
        }
        i++;
    }

}