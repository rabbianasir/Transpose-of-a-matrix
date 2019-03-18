#include<stdio.h>
int main()
{
    int matrix1[2][2],i,j;
    for(i=0;i<2;i++)
    {
        printf("enter the elements of a matrix in a row:");
        for(j=0;j<2;j++)
            scanf("%d",&matrix1[i][j]);
    }

    puts("TRANSPOSE OF MATRIX:");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("\t%d",matrix1[j][i]);
        printf("\n");
    }
}
