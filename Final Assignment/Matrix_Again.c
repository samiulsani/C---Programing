#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=r-1; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=c-1; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}