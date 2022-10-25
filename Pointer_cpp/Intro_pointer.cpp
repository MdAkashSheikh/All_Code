#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    x = 10;
    printf("x=%d\n", *(&x));

    int* px;
    px = &x;
    printf("*px=%d\n", *px);
    int** pxx = &px;
    printf("**pxx==%d",**pxx);

    return 0;
}
