#include<stdio.h>
int main()
{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        int i,x,m,a;
                i=n%100;
        x=n%10;
	a=i-x;
        m=a/10;
        printf("the output is %d", m);
}


