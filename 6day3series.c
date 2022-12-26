#include<stdio.h>
#include<math.h>
//int fact();
void main()
{
    int i,fact=1,n,x,sum=0,p;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    { 
     fact=fact*i;
     p=pow(x,i);
     
     if(i%2==0)
     { fact=-fact;
        sum=sum+p/fact;
     
     }
     
     
    }sum=sum+1;
    printf("%d",sum);

}
