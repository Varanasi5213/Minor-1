#include <stdio.h>
#include <stdlib.h>
#include "ReturnMatrix.h"

int main()
{
    float **  distribution_matrix;
    distribution_matrix=diff_mat(5,5);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
             printf("%f ",distribution_matrix[i][j]);
        }
        printf("\n");
    }
}
