#include<stdio.h>
int main()
{
	float a,b,c,m;
	printf("enter the line in the format of ax+by+c=0");
	scanf("%f %f %f %f",&a,&b,&c,&m);
	m=-a/b;
	printf("slope %f",m);
}
