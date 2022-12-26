#include<stdio.h>
#include<math.h>
void main()
{
    int i,fact=1,n,x,sum=0,y;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {   
     fact=fact*i;
     y=pow(x,i);
    sum=sum+y/fact;
    }
    printf("%d",sum);

}