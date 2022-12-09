#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// unsigned rev(unsigned num){
//   unsigned reversed = 0;
//   while(num){
//     reversed = reversed*10+num%10;
//     num = num/10;
//   }
//   return reversed;
// }

int rev(int n)
{
    int reversedNumber = 0, remainder;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while (t--)
    {
        ll a, b;
        cin>>a>>b;

        ll p=rev(a);
        ll q=rev(b);

        ll r=p+q;
        cout<<rev(r)<<endl;
    }

    return 0;
} 