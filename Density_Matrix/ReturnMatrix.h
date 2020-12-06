#include"DifferenceMatrix.h"

float** diff_mat(int row,int column)
{
    int i,j;
    float dif;
    int max=0;
    int min=100;
    int** difference_matrix=diff_rssi(5,5);
    float **distribution_matrix;
    distribution_matrix=(float**)malloc(sizeof(float*)*row);
    for(i=0;i<row;i++)
    {
        *(distribution_matrix+i)=(float*)malloc(sizeof(float)*column);
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(difference_matrix[i][j]<min)
            min=difference_matrix[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(difference_matrix[i][j]>max)
            max=difference_matrix[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            float dif = difference_matrix[i][j]-min;
            dif = dif /(max - min);
            distribution_matrix[i][j]=dif;
        }
    }
    return distribution_matrix;
}

