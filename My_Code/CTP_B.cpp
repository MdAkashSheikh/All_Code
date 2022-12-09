// #include<bits/stdc++.h>
// using namespace std;

// int mian()
// {   
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n+5];
//         for(int i=0; i<n; i++)
//         {
//             cin>>arr[i];
//         }

//     }


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    int p=n-10;

    if(n<=10)
    {
        cout<<0<<" "<<n<<endl;
    }
    else
    {
        cout<<n<<" "<<p<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}