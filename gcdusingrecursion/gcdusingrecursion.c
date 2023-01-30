#include<stdio.h>
int gcd(int a,int b);
int main(){
int num1,num2;
printf("enter any two num");
scanf("%d%d",&num1,&num2);
int res=gcd(num1,num2);
printf("the gcd of %d and %d is %d",num1,num2,res);
return(0);
}
int gcd(int a,int b)
{
if(b!=0)
return gcd(b,a%b);
else 
return a;
}
