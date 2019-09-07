#include<stdio.h>
int main()
{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        int a,b,m;
            a=n%10;
         n=n/10;
	 b=n%10;
	 n=n/10;
	 m=(n*10+a)*10+b;

        printf("the output is %d",m);
}


