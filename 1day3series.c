#include<stdio.h>
void main()
{
    int i,n,j,fact=1,sum=0;
    printf("no.of terms in series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
    {
        fact=fact*i;
        sum=sum+fact;
    } 
     
    printf("%d",sum);

}