#include<stdio.h>
int main()
{
	float a,b,c; 
        float y;
	printf("enter the coeficients of x,y and constant respectively");
	scanf("%f%f%f",&a,&b,&c);

	y=(-a)/b;
	

	if(b==0)
	{
		printf("the line is vertical");
	}
	else 
		printf("the line is not vertical and slope is %f",y);
}
