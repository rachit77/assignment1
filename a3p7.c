#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,r1,r2,t1,t2;
	printf("enter coeficients of xsq,x and constant");
	scanf("%f%f%f",&a,&b,&c);

	x1=(-b);
	x2=((b*b)-4*a*c);
        r1=(x1+sqrt(x2))/2*a;
        r2=(x1-sqrt(x2))/2*a;
        t1=x1/(2*a);
        t2=sqrt(-x2)/(2*a);
        if(x2>0)
{
        printf("the roots are (%f,%f)",r1,r2);
}
        else if(x2==0)
{  
        printf("the root is %f",r1);
}
        else
{
        printf("the roots are %f+%fi and %f-%fi",t1,t2,t1,t2);
}
}
         
	
