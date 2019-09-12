#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three nos");
	scanf("%d%d%d",&a,&b,&c);
        
	if(a>b&&a<c||a>c&&a<b)
	{
		printf("%d",a);
	}
	else if(b>c&&b<a||b>a&&b<c)
	{
		printf("%d",b);
	}
	else
		printf("%d",c);
}
		

