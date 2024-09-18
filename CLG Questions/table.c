// 10/9/2024
#include <stdlib.h>

// return array which have multiples
int *tableof(int num, int upto)
{
    int *table = malloc(sizeof(int)*upto);

    for (int i = 1; i <= upto; i++)
        table[1 - 1] = num*i;

    return table;
}

// print the table
void table_pr(int num, int upto)
{
    for (int i = 1; i <= upto; i++)
    {
        printf("%d\n", num*i);
    }
}

int main()
{
    int num, upto;
    printf("enter a number to get table of upto\t");
    scanf("%d%d", &num, &upto);

    // int *table =tableof (num, upto);

    // for(int i=0;i<upto;i++){
    //     printf("%d\n",table[i]);
    // }
    table_pr(num, upto);
    return 0;
}