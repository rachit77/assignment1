#include<stdio.h>
int main()
{
        int n,x,i,a,s=0.b=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                a=x%10;
                x=x/100;
		x=(x*10)+a;
		s=s+x;
        }
        printf("sum of  digits are %d",s);
}


