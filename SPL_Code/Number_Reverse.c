#include<stdio.h>

int main()
{
    int n, a=0;
    scanf("%d", &n);

    while(n!=0)
    {
        int p=n%10;
        a+=p;
        a*=10;
        n=n/10;
    }

    printf("%d",a/10);
    return 0;
}
