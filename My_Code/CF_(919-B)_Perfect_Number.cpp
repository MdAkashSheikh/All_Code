#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int ans=0;
    while(n)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;

}
int main()
{
    int n, result=0;
    cin>>n;
    while (n)
    {
        result++;
        if(solve(result)==10)
        {
            n--;
        }
    }
    cout<<result<<endl;


    return 0;
}