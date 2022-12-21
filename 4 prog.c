#include<stdio.h>
void main()
{ 
    char k,i;
    char j;
    
    printf("enter x\n");
   for(i=65;i<=68;i++)
   { 
    k=i;
    for(j=65;j<=i;j++)
    { 
        printf("%c",k);
        ++k;
    }
    printf("\n");
   }
   }