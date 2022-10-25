#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char ch[n], ch1[3];

    for(int i=0; i<n; i++)
    {
        cin>>ch[i];
    }
    sort(ch, ch+n);

    for(int i=0; i<n-1; i++)
    {
        if(ch[i] != ch[i+1])
        {
            cout<<ch[i+1]<<ch[i]<<endl;
            return 0;
        }
    }
    cout<<ch[0]<<ch[1]<<endl;

    return 0;
}
