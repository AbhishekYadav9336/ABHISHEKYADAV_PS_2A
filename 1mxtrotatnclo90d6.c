//clock complete 
#include<stdio.h>
void main()
{ int a[10][10],b[10][10],n,m,i,j;
  printf("entre the no.of rows");
  scanf("%d",&n);
  printf("entre the no.of column");
  scanf("%d",&m);
  printf("entre the element of matrix");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("the matrix befor rotation is\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
       printf("%d\t",a[i][j]);
    }
    printf("\n");
  }

printf("the matrix after clockwise rotation is\n");
  for(i=0;i<n;i++)
  {
    for(j=m-1;j>=0;j--)
    {
       printf("%d\t",a[j][i]);
    }
    printf("\n");
  }
  
}