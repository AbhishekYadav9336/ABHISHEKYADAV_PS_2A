#include<stdio.h>
void populate(int);
void main()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    populate(n);
    
}
int i,m,odd=1,arr[100],l;
void populate(int n)
{if(n%2!=0)
    {
        m=(n/2)+1;
        l=n-1;
    }
    else{

        m=(n/2);
        l=n;
    }
    
    for(i=0;i<m;i++)
    {
         arr[i]=odd;
         odd=odd+2;
    }
    for(i=m;i<n;i++)
    {
        arr[i]=l;
        l=l-2;
    }
    
    printf("the elements are");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}