#include<stdio.h>
int main()
{
	printf("enter the length and breadth");
	float l,b,area,perimeter;
	scanf("%f %f" ,&l,&b);
	area=l*b;
	perimeter=l+b;
	printf("area and perimeter of rectangle are :%f  %f",perimeter, area);
}
