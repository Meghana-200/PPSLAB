#include<stdio.h>
int linear_search(int [],int,int);
int main()
{
int size,i,key,a[5];
printf("enter the size: ");
scanf("%d",&size);
printf("enter the array elements");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter key element: ");
scanf("%d",&key);
int pos=linear_search(a,size,key);
if(pos==-1)
{
printf("unsuccessfull");
}
else
{
printf("element found of %d",pos);
return(0);
}
}
int linear_search(int a[],int size,int key)
{
int i;
for(i=0;i<size;i++)
{
if(a[i]==key)
{
return i+1;
}
}
return-1;
}

