#include<stdio.h>

int main()
{
    int n, s=0;
    printf("Please enter the positive number\n");

    do{
        scanf("%d",&n);
        s+=n;
    }
    while(n!=0);
        printf("%d",s);

    return 0;
}
