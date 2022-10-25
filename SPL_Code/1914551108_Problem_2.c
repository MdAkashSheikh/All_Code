#include<stdio.h>

int main()
{
    int n, k=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++, k++)
        {
            if(k==n)
            {
                k=0;
            }
            printf("%d ", k);

        }
        printf("\n");

    }

    return 0;
}
