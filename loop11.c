#include<stdio.h>
void main()
{
    int i,j,k,l,n=5,m=8;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {printf("%d",k);}
    for(j=1;j<=m;j++)
    {
        printf(" ");
    }//printf("\n");
    m=m-2;
    for(k=i;k>=1;k--)
    {
        printf("%d",k);
    }printf("\n");
    
    }
}