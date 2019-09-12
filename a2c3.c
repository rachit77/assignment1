#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,d,e,f,d1,dis1,d2,d3,dis2,dis3,s,area;
        printf("enter  points");
        scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
        d1=pow((c-a),2)+pow((d-b),2);
        dis1=sqrt(d1);
	d2=pow((a-e),2)+pow((b-f),2);
	d3=pow((c-e),2)+pow((d-f),2);
        dis2=sqrt(d2);
	dis3=sqrt(d3);
	s=(dis1+dis2+dis3)/2;
	area=sqrt(s*(s-dis1)*(s-dis2)*(s-dis3));

        printf("%f",area);
}


