#include<stdio.h>

int main()
{
    int r1, r2, Rs;
    float w, Rp;
    scanf("%d %d %f", &r1, &r2, &w);
    Rs=r1+r2;
    Rp=(r1*r2)/(r1+r2);

    if((Rs-Rp)>w)
    {
        printf("High Resistance\n");
    }
    else
    {
        printf("Low Resistance\n");
    }

    return 0;
}
