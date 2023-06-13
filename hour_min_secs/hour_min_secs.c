#include<stdio.h>

int main()
{
    int s,h,m;
    printf("Enter the total number of seconds : \n");
    scanf("%d",&s);

    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;

    printf("%d hour %d minute %d second \n",h,m,s);
    return 0;
}