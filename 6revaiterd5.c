#include<stdio.h>
void rev(int);
void main()
{
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    rev(n);
}
void rev(int n)
{ 
    int i,arr[30],temp;
    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    for(i=0;i<n;i+2)
    {
      temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }
    printf("the array after swapping is");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

