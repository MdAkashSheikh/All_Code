#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, j=0;
    cin>>n>>k;
    int p=240-k;

    for(i=1; i<=n; i++){
        if(p>=(i * 5)){
            p = p-(i*5);
            j++;
        }
    }

    cout<<j<<endl;
    return 0;
}
