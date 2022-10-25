#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll lcm(ll a, ll b, ll c)
{
    ll ans, arr[5];

    arr[0] = a, arr[1] = b, arr[2]=c;
    for(int i=1; i<3; i++)
    {
        ans = (arr[i]*ans)/__gcd(arr[i], ans);
    }
    return ans;

}

int main()
{

    std::cout << std::fixed << std::setprecision(2) << lcm(10, 15, 20);
    return 0;
}
