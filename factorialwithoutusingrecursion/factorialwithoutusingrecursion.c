#include<stdio.h>
int factorial(int);
int main()
{
int n,fact;
printf("enter number");
scanf("%d",&n);
fact=factorial(n);
printf("factorial is %5d",fact);
return(0);
}
int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}

