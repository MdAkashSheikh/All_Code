#include<bits/stdc++.h>
using namespace std;

int Roman(string s)
{
    unordered_map<char, int>m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int l=s.length();
    int i=l-1;
    int num = 0;

    while(i>=0)
    {
        if(i == l-1 || m[s[i]]>=m[s[i+1]])
        {
            num+=m[s[i]];
        }
        else
        {
            num-=m[s[i]];
        }
        i--;
    }
    return num;



}

int main()
{
    string s;
    cin>>s;

    cout<<Roman(s)<<endl;

    return 0;
}
