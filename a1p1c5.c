#include<stdio.h>
int main()
{
        int n;
        printf("enter the number");
        scanf("%d",&n);
        int i,x,m;
                i=n%100;
        x=n-i;
        m=x/100;
        printf("the output is %d", m);
}


