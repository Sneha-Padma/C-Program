#include<stdio.h>
void main()
{
	int n=10;
	int a=0,b=1;
	printf("%d,%d",a,b);
	int i;
	 for ( i=1;i<n;i++)
	 {
		i=a+b;
		a=b;
		b=i;
		printf("%d",i);
		}
		

}

