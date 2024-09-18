// 10/9/2024
#include <stdio.h>
void fact(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    printf("%d ", fac);
}

int main()
{
    int num;
    printf("enter a number\t");
    scanf("%d",&num);
    fact(num);
    return 0;
}