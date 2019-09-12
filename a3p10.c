#include<stdio.h>
int main()
{
	int a,i,x,p=0;
	printf("enter number x");
	scanf("%d",&x);
	printf("enter five nos");
	for(i=1;i<=4;i++)
	{
        scanf("%d",&a);        
        if(a==x)
	{
		p++;
	}
	}
	printf("%d",p);

}
