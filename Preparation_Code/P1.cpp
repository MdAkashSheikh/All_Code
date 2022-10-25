#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=s.length(); i>0; i--)
    {
        for(int j=s.length(); i>j; j--)
        {
            if(s[i]<s[j])
            swap(s[i], s[j]);
            break;
        }
    }
    cout<<s<<endl;

    return 0;
}
