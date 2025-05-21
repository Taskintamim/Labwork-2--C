#include <stdio.h>
int main()
{
    int row=0,col=0, m[row][col],max=0,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row,&col);
    printf("Enter values for m :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("row[%d]col[%d]:", i+1,j+1);
            scanf("%d", &m[i][j]);
            if (m[i][j]>max)
            {
                max = m[i][j];
            }
        }
    }
    printf("Maximum = %d", max);
}

