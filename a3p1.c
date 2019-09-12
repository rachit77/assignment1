#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter 3 nos.");
	scanf("%f%f%f",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("%f is largest",a);
		}
		else
			printf("%f is largest",c);
	}
	if(b>c)

	{
		if(b>a)
		{
			printf("%f is largest",b);
		}
		else
			printf("%f is largest",a);
	}
	else
		printf("%f is largest",c);

}
