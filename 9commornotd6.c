#include<stdio.h>
void common();
void noncommon();
void main()
{
    int i,j,n,m;
    int a[20],b[20];
    printf("enter the no. element of array a");
    scanf("%d",&n);
    printf("enter the no. of element of array b");
    scanf("%d",&m);
    printf("enter the element of array1-");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
printf("enter the element in array2-");
for(j=0;j<m;j++)
{
    scanf("%d",&b[j]);
}
common();
}
int i,j;
    //int a[20],b[20],c[20],d[20],e[20];
    int k=0,l=0,p=0,q=0;
void common(int a[],int b[],int n,int m){
for(i=0;i<n;i++)
{ int m=0;
   int c[20];
    for(j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
            c[k]=a[i]; 
           k++;
        }
}
printf("the common elements are");
for(i=0;i<k;i++)
{
    printf("%d",c[i]);
}
}}
void noncommon(){
printf("the non common elements are");
for(i=0;i<l;i++)
{
    printf("%d",d[i]);
}
for(j=0;j<m;j++)
{  int count=0;
    for(i=0;i<n;i++)
{
   if(b[j]==a[i])
    {
        count=1;
    }
    if(count==0){
        e[p]=b[j];
        p++;
    }
}
}
for(i=0;i<p;i++)
{
    printf("%d",e[i]);
}
}