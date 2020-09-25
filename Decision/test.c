#include "NewDensity.h"
#include <stdio.h>
int m = 9,n=9;// no. rooms in the room

void main()
{
    struct Fan fan; // creating struct object and filling them
    fan.pos[0] = 4;
    fan.pos[1] =4;
    fan.radius = 3;
    fan.status = 0;
    fan.power  = 0;
    fan.Den = 0;
    int m=9,n=9;
    float **den; // creating 2d array dynamically for density matrix
    den = malloc(sizeof(float*) * m);

    for(int i = 0; i < m; i++) {
        den[i] = malloc(sizeof(float*) * n);
    }
    for(int i=0; i<m; i++) // assigning values to den matrix
        for (int j=0; j<n; j++)
            den[i][j]=0.5;

    float ** b = NewDensity(den,&(fan),9,9);
    for(int i=0; i<m; i++) // assigning values to den matrix
    {
        for (int j=0; j<n; j++)
        {
            printf("%.1f  ",b[i][j]);
        }
        printf("\n\n");
    }
}

