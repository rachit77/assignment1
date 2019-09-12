#include<stdio.h>
int main()
{
        int x;
        for(x=0;x<100;x++)
                if((x<20)||(x>90)||(x>50)&&(x<70))
                        printf("%d \t",x);
}

