#include<stdio.h>
void main()
{
    int i,j,k=5,l,m,gap,g,n;
    n=3;
    for(i=3;i>=1;i--)
    { for(j=n;j<3;j++)
    {  
        printf("  ");
    }n--;
    for(l=k;l>=1;l--)
    {
        printf("* ");
    }printf("\n");
    k=k-2;
    }gap=2;
    m=3;
    for(i=4;i<=5;i++)
    {
        for(j=1;j<gap;j++)
        {
           printf("  ");
        }
        gap--;
        for(j=1;j<=m;j++)
        {
           printf("* ");
        }m=m+3;
        printf("\n");
    }


}