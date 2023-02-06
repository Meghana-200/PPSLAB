#include<stdio.h>
int gcd(int,int);
int main()
{
int a,b,num1,num2,res;
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
res=gcd(num1,num2);
printf("gcd of %d and %d is %d",num1,num2,res);
return(0);
}
int gcd(int a,int b)
{
if(a<b)
return gcd(b,a);
if(b==0)
return a;
return gcd(b,a%b);
}

