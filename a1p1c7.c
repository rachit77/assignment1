#include<stdio.h>
int main()
{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        int a,b,c;
                a=n%10;
	n=n-a;
	n=n/10;
	b=n%10;
	c=a+b;
        printf("the output is %d", c);
}


