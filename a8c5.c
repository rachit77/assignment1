#include<stdio.h>
int main()
{
        int n,x,i,a,b,p,s=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                a=x%10;
                x=x/10;
		b=x%10;
		x=x/10;
		p=a*b;
		s=s+p;
        }
        printf("sum of last digits are %d",s);
}


