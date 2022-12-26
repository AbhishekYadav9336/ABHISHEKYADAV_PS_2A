#include<stdio.h>
int fact();
void main()
{
    int c,n;
printf("enter n");
scanf("%d",&n);
 c=fact(n);
 printf("%d",c);
}
int fact(int n)
{
    int i=1,f=1,sum=0;
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f/i;
        
    }
    return sum;
}