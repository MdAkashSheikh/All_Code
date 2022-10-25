#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    string s1[m], s2[m], s3[n], s[n];

    for(int i=0; i<m; i++)
    {
        cin>>s1[i]>>s2[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>s3[i];

        for(int j=0; j<m; j++)
        {
            if(s3[i] == s1[j] || s3[i] == s2[j])
            {
                if(s1[j].size() > s2[j].size())
                {
                    s[i] = s2[j];
                }
                else
                {
                    s[i] = s1[i];
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<" ";
    }


    return 0;
}


