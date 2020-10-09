#include<stdio.h>
#include"Decision.h"
int deviceCount=2;
int m=9,n=9;
void main()
{
    struct Device d[2];
    array(d);
    float ** density = Coverage(&(d[1]),9,9);
    printf("Distribution matrix\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%.0f ",density[i][j]);
        }
        printf("\n");
    }

    float** cov1=Coverage(&(d[0]),9,9);
    printf("\nFan 1 Coverage area matrix\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%.0f ",cov1[i][j]);
        }
        printf("\n");
    }

    float** cov2=Coverage(&(d[1]),9,9);
    printf("\nFan 2 Coverage area matrix\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%.0f ",cov2[i][j]);
        }
        printf("\n");
    }
    Decision(density,d,9,9,2);
    printf("\n");
    //Percent(density,&(d[0]) ,9, 9);
    //printf("\n%f",d[0].Den);
        dis(&(d[0]));
         printf("\n");
        dis(&(d[1]));


}
