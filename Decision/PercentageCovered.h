#include "Cov.h"

void per(float ** Density, struct Fan *F,int m, int n)
{
    float **cov = Coverage(F,m,n);
    float sum = 0, tot=0;
    for(int i=0; i<m; i++)
        for (int j=0; j<n; j++)
        {
            sum = sum + Density[i][j] * cov[i][j];
            tot = tot + Density[i][j];

        }
    F->Den= sum/tot;
}
