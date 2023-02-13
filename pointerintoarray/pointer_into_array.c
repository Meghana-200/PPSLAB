#include<stdio.h>
int main(){
int a[3],n,i;
int *ptr;
printf("enter the elements of array");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
ptr=a;
for(i=0;i<3;i++)
{
printf("%5d",*ptr);
ptr+=1;
}
return(0);
}
