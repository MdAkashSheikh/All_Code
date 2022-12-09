#include<bits/stdc++.h>
using namespace std;

bool dc(string w)

{
    int n=w.size();
    int Upper=0;

    for(int i=0; i<n; i++)
    {
        if(w[i]>='A' && w[i]<='Z')
        Upper++;

        if(Upper == n or Upper == 0 or (w[0]>='A' w[0]<='Z' and Upper == 1))
        return true;

        return false;
    }
}

int main()
{
    string s;
    cin>>s;

    if(dc(s))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    return 0;
}