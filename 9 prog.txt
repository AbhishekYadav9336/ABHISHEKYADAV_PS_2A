#include<stdio.h>
void main()
{
int i,j,k,n,g,a,s,d,t;
for(i=1;i<=3;i++)
{ //g=i;
for(j=i;j<=2;j++)
{ 
    printf(" ");
}
for(k=1;k<=2*i-1;k++)
{   
    printf("* ");
    
}
printf("\n");
}
t=3;
for(a=1;a<=2;a++)
{//i=g;
    for(s=1;s<=a;s++)
    {
        printf(" ");
    }
 for(d=1;d<=t;d++)
 {
     printf("* ");
 }printf("\n");
t=t-2;
}
}