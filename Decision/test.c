#include "PercentageCovered.h"
#include <stdio.h>
#define m 9 // no. rooms in the room
#define n 9 // no. columns in the room
void main()
{
    struct Fan fan; // creating struct object and filling them
    fan.pos[0] = 4;
    fan.pos[1] = 4;
    fan.radius = 3;
    fan.status = 0;
    fan.power  = 0;
    fan.Den = 0;
    float **den; // creating 2d array dynamically for density matrix
    den = malloc(sizeof(float*) * m);

    for(int i = 0; i < m; i++) {
        den[i] = malloc(sizeof(float*) * n);
    }
    for(int i=0; i<m; i++) // assigning values to den matrix
        for (int j=0; j<n; j++)
            den[i][j]=0.5;
    per(den,&(fan),m,n);
    printf("\n%f",fan.Den);
}
