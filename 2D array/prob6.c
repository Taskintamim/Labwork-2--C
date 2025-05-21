#include <stdio.h>
int main()
{
    int row=0,col=0, m[row][col],even=0, odd =0,i,j;
    printf("Enter number of row and col: ");
    scanf("%d %d", &row,&col);
    printf("Enter values for m :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("row[%d]col[%d]:", i+1,j+1);
            scanf("%d", &m[i][j]);
            if (m[i][j]%2==0)
            {
                even+=1;
            }
            else
            {
                odd+=1;
            }
        }
    }
    printf("Even = %d\nOdd =%d", even, odd);
}
