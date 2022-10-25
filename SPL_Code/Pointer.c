#include<stdio.h>

int main()
{
    char name[] = "Harry Potter";
    printf("%c",*name);
    printf("%c",*(name+4));

    return 0;
}
