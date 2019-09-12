#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,d,e,dis;
        printf("enter  points");
        scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
        dis=(a*c+b*d+e)/sqrt((a*a)+(b*b));

        printf("%f",dis);
}


