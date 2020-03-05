#include<stdio.h>
#include<stdlib.h>
int i=0,j=0,n=0,k=0;
void warshalls(int r[n][n])
{
        
        for(k=1;k<=n;k++)
                for(i=1;i<=n;i++)
                        for(j=1;j<=n;j++)
                                r[i][j]=max(r[i][j],r[i][k]&&r[k][j]);
        printf("The Warshall's Matrix Is \n");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        printf("%d  ",r[i][j]);
                }
                printf("\n");
        }
}

void main()
{
        printf("Enter The order of Warshall's Matrix\n");
        scanf("%d",&n);
        int r[n][n];
        printf("Enter The Warshall's Matrix\n");
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                        scanf("%d",&r[i][j]);
        warshalls(r);        
}

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

