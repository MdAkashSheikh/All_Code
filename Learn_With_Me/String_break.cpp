#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<string>s2, s3, s4;
    getline(cin, s);
    int i;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]!='=')
        {
            s2.insert(s[i]);
        }
        else
        {
            break;
        }
    }

    for(i<s.size(); i++)
    {
        if(s[i]=="+" || s[i]== "-" || s[i]=="*" || s[i]=="/")
        {
            s3.insert(s[i]);
        }
        else
        {
            s4.insert(s[i]);
        }
    }
    set<string>::iterator it;

    cout<<"Variable: "<<s2<<" ";
    for(it=s4.begin(); it!=s4.end(); it++)
    {
        cout<<*it<<" ";
    }


    return 0;
}

