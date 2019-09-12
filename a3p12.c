#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,r,a,b,c;
	float d,d1,d2,area;
	printf("enter the values p q r a b c");
	scanf("%d %d %d %d %d",&p,&q,&r,&a,&b,&c);
	
		d1=p*a+b*q+c;
		d2=sqrt((a*a)+(b*b));
			d=(d1/d2);
			printf("dis %d",d);
		if((d>r)||(-d>r))
				{
				printf("circle does not intersect line");
				}
				else
				{
				printf ("circle intersect line");
				area=d*(sqrt(r*r-d*d));
					printf("area of triangle is %d",area);
					}
}
