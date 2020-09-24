#include "Cov.h"
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
    float **b=Coverage(fan,m,n);// reading the coverage matrix from function
    for(int i=0;i<m;i++)// displaying the matrix
     {
         for(int j=0;j<n;j++)
        {
             printf("%.0f",(b[i][j]));
             printf("  ");
        }
         printf("\n");
    }
}
