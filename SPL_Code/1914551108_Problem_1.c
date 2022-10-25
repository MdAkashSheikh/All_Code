#include<stdio.h>

int main()
{
    int r1, r2, Rs;
    float w, Rp;
    scanf("%d %d %f", &r1, &r2, &w);
    Rs=r1+r2;
    Rp=(float)(r1*r2)/(float)(r1+r2);

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
