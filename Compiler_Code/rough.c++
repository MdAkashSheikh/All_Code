#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, R1,R2;
    printf(" give a,b,c value :");
    scanf("%f %f %f",&a,&b,&c);
    R1 = (-b + sqrt((b*b) - 4*a*c)) / 2*a;
    R2 = (-b - sqrt((b*b) - 4*a*c)) / 2*a;
    printf("the D value is: %f\n ",R1);
    printf("the E  value is: %f\n ",R2);

    return 0;
}

