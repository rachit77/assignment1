#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,p,q,r,x,y;
        printf("enter  points");
        scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
        
        x=(b*r-a*c)/(a*q-b*p);
	y=(a*r-p*c)/(p*b-a*q);

        printf("the point of intersection is %f %f",x,y);
}


