#include<stdio.h>
void main()
{
    int i,n,sum=0,x;
    printf("enter the no. of terms in series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=i*(i+1)*(i+2);
        sum=sum+x;

    }
    printf("the sum is %d",sum);
}