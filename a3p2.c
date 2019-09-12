#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter four nos.");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if((a>c)&&(a>d)&&(a>b))
	printf("%d is largest",a);
        else if((b>c)&&(b>a)&&(b>d))
	printf("%d is largest",b);
	else if((c>d)&&(c>b)&&(c>a))
        printf("%d is largest",c);
        else
	printf("%d is largest",d);
}
