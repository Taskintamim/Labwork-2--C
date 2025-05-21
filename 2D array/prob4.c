#include <stdio.h>
int main()
{
    int row=0,col=0, m[row][col],sum=0,i,j;
    printf("Enter number of row and col: ");
    scanf("%d %d", &row,&col);
    printf("Enter values for m :\n");
    for(j=0; j<col; j++)
    {
        sum =0;
        for(i=0; i<row; i++)
        {
            printf("row[%d]col[%d]:", i+1,j+1);
            scanf("%d", &m[i][j]);
            sum+=m[i][j];
        }
         printf("Sum of column[%d] = %d\n", j+1, sum);
    }

}
