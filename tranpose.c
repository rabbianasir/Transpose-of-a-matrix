#include<stdio.h>
int main()
{
    int matrix1[2][2],i,j,transpose[2][2];
     printf("enter the elements in a matrix");
    //input from user
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            scanf("%d",&matrix1[i][j]);
        }
    }

    for(i=0;i<2;i++) //computing the transpose
    {
        for(j=0;j<2;j++)
        {
           transpose[j][i]= matrix1[i][j]; 
        }
    }
    //printing the transpose of matrix
    for(i=0;i<2;i++) 
    {
        for(j=0;j<2;j++)
        {
           printf("%d",transpose[i][j]);
                  
        }
        printf("\n");
    }
    return 0;
}
