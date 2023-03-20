#include<stdio.h>
int main()
{
int num=5,fact=1;
int i;
if(num<0)
{
	printf("error");
}
else
{
	for ( i=1;i<=num;i++)
	fact=fact*i;
}
printf("fact %d:%d",num,fact);
}
