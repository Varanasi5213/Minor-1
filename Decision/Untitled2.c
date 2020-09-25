#include<stdio.h>
#include"Decision.h"
int deviceCount=2;
int m=9,n=9;
void main()
{
    struct Device d[2];
    array(d);
    float ** density = Coverage(&(d[0]),9,9);
    printf("%d",Decision(density,d,9,9,2));
    printf("\n");
    //Percent(density,&(d[0]) ,9, 9);
    //printf("\n%f",d[0].Den);
        dis(&(d[0]));
         printf("\n");
        dis(&(d[1]));


}
