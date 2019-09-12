#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,A,B,C;
        printf("enter  points");
        scanf("%f %f %f",&a,&b,&c);
        A=acos((b*b+c*c-a*a)/2*b*c);
	B=acos((a*a+c*c-b*b)/2*a*c);
	c=acos((b*b+a*a-c*c)/2*a*b);
        

        printf("the angles are %f %f %f",A,B,C);

}


