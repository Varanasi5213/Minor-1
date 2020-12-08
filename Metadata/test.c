#include<stdio.h>
#include "Structures.h"
void main()
 {

     struct Room R;
     R = inp();
     struct Device D1[R.numberoffans];
     struct Device D2[R.numberoflights];
     values(D1,D2);
     int i=0,j=0;
     printf("Number of fans   : %d \n",R.numberoffans);
     printf("Number of lights : %d \n \n",R.numberoflights);


     for(i=0;i<R.numberoffans;i++)
     {
        printf("FAN %d \n",i);
        printf("Position of fan : %d %d\n",D1[i].pos[0],D1[i].pos[1]);
        printf("Radius of fan   : %d \n",D1[i].radius);
        printf("Power of fan    : %0.2f \n \n" ,D1[i].power);

     }

     j=R.numberoffans;
     printf("\n \n");
     for(int k=0;k<R.numberoflights;k++)
     {
        printf("LIGHT %d \n",k);
        printf("Position of light : %d %d\n",D2[k].pos[0],D2[k].pos[1]);
        printf("Radius of light   : %d \n",D2[k].radius);
        printf("Power of light    : %0.2f \n \n \n" ,D2[k].power);
        j=j+1;
     }


 }
