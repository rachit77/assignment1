#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,d,d1,dis;
        printf("enter  points");
        scanf("%f %f %f %f",&a,&b,&c,&d);
        d1=pow((c-a),2)+pow((d-b),2);
	dis=sqrt(d1);

        printf("%f",dis);
}

