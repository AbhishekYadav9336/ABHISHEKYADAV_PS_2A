//{(1/fact(1))-(2/fact(3))+(3/fact(5))-(4/fact(7))....}
#include<stdio.h>
void series();
void main()
{
   series();
}    

  void series()
   { 
    int i,fact=1,n,x=1,sum=0,p,m,f;
 
    printf("enter the no. of terms in series ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
     fact=fact*i;
     
     
     if(i%2!=0)
     {    
        sum=sum+x/fact;
        x=x+1;
        fact=-fact;
     }
    }//sum=sum+1;
    printf("%d",sum);
   }
