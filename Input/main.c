// Including the required header files
#include<stdio.h>
#include "DifferenceMatrix.h"


void main()
{
         int ** difference_matrix=diff_rssi(5,5);
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                printf("%d ",difference_matrix[i][j]);      // Printing the difference matrix

            }
               printf("\n");

        }

}



