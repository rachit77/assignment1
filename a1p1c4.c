#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int i,x,m;
		i=n%10;
	x=n-i;
	m=x/10;
	printf("the output is %d", m);
}

