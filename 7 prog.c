#include<stdio.h>
void main()
{
    int i,j,k,l,n=2;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=3;j++)
        {
            printf(" ");
        }
        for(k=i;k<i*2;k++)
        {
            printf("%d",k);
        }
        if(i>=2){
            for(j=n;j>=i;j--)
            printf("%d",j);
        }n=n+2;
        for(l=i;l<=3;l++){
            printf(" ");
        }printf("\n");
    }
}
