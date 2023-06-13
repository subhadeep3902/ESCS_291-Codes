#include<stdio.h>
int main()
{
 int n,i,j,k,c=1;
 printf("Enter the number of rows:\n");
 scanf("%d",&n);
 printf("\n");
 for(i=0;i<n;i++)
 {
  for(k=1;k<=n-i;k++)
  printf("  ");
  for(j=0;j<=i;j++)
  {
   if(j==0)
   c=1;
   else
   c=c*(i-j+1)/j;
   printf(" %3d",c);
  }
  printf("\n");
 }
 return 0;
}

