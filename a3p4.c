#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three nos");
	scanf("%d%d%d",&a,&b,&c);

	if((a*a)==(b*b)+(c*c))
	{
		printf("angle a is 90");
	}
	else
		printf("angle a is not 90");
}
