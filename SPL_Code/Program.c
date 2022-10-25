#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    float a=1, b=0;

    for(int i=1; i<=n; i++)
    {
        a=a*i;
        b+=(1/a);
        if(i<n)
        {
            printf("(1/%d!)+",i);
        }
        else
        {
            printf("(1/%d!) = ", i);
        }
    }
    printf("%f",b);

    return 0;
}
