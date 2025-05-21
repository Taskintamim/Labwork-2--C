#include <stdio.h>
int main()
{
    int row=0,col=0, m[row][col],sum=0,i,j;
    printf("Enter number of row and col: ");
    scanf("%d %d", &row,&col);
    printf("Enter values for m :\n");
    for(i=0; i<row; i++)
    {
        sum = 0;
        for(j=0; j<col; j++)
        {
            printf("row[%d]col[%d]:", i+1,j+1);
            scanf("%d", &m[i][j]);
            sum+=m[i][j];
        }
         printf("Sum of row [%d] = %d\n", i+1, sum);
    }

}
