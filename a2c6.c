#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,d,x,y,rad;
        printf("enter eq of circle in the format of (x^2)+(y^2)+ax+by+c");
        scanf("%f %f %f",&a,&b,&c);
	x=-a/2;
	y=-b/2;
        d= (x*x)+(y*y)-c;
        rad=sqrt(d);

        printf("center of circle %f %f",x,y);
	printf("radius is %f",rad);

}


