#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three nos two of which are same");
        scanf("%d%d%d",&a,&b,&c);

	if(a==b)
	{
		printf("%d",c);
	}
	else if(b==c)
	{
		printf("%d",a);
	}
	else
		printf("%d",b);
}
