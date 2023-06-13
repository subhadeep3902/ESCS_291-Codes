#include<stdio.h>
int main()
{
int rows,i,j,k;
printf("Enter the number of rows : \n");
scanf("%d",&rows);
printf("\n");
for(i=1;i<=rows;i++)
{
for(k=rows-i;k>=1;k--)
printf(" ");
for(j=1;j<=(2*i)-1;j++)
printf("*");
printf("\n");
}
return 0;
}
