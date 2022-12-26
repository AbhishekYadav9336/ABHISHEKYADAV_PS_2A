#include<stdio.h>
void arrayrev();
void main()
{
    int i,n,arr[20],x;
    arrayrev();  
}
void arrayrev()
{ 
    int i,arr[20],n;
printf("enter n");
scanf("%d",&n);
printf("enter the element in array");
for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    printf("the array element after reversing is");
for(i=n-1;i>=0;i--)
    {
       
       printf("%d",arr[i]);
       
    }
}