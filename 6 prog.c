#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=3;j++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        if(i>=2){
            for(j=2;j<=i;j++)
            printf("%d",j);
        }
        for(l=i;l<=3;l++){
            printf(" ");
        }printf("\n");
    }
}