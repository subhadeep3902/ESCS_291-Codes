#include<stdio.h>
#include<math.h>

int main()
{
     int n;
     float p,r,t,si=0.0,ci=0.0,a=0.0;
     printf("Enter the principal(in Rs.) : \n");
     scanf("%f",&p);
     printf("Enter the rate of interest(in percent) : \n");
     scanf("%f",&r);
     printf("Enter the time period(in years) : \n");
     scanf("%f",&t);
     printf("Enter the number of times interest is compounded per year(in case of CI) : \n");
     scanf("%d",&n);

     si=(p*r*t)/100.0;
     a=p*pow((1+((r/100)/n)),(n*t));
     ci=a-p;

     printf("Principal amount is : Rs %f\n",p);
     printf("Rate of interest is : %f percent\n",r);
     printf("Time period is : %f years\n",t);
     printf("Number of times compounded is : %d times\n",n);
     printf("Simple interest is : Rs %f\n",si);
     printf("Compound interest is : Rs %f\n",ci);
     return 0;
}