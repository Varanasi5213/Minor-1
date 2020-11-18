#include<stdio.h>
#include<stdlib.h>


int main()
{
    int **difference_matrix,row=5,column=5,i,j,p1,p2;
    difference_matrix=(int**)malloc(sizeof(int*)*row);
    for(i=0;i<row;i++)
    {
        *(difference_matrix+i)=(int*)malloc(sizeof(int)*column);

    }

     FILE *fp1,*fp2;

     fp1=fopen("t_0.txt","r");
     fp2=fopen("t_1.txt","r");

     int x,y,k,diff;
     k=0;

    p1=0;p2=0;
    while( (!feof(fp1)) && (!feof(fp2)) )
    {

            fscanf(fp1,"%d",&x);
            fscanf(fp2,"%d",&y);
            diff=y-x;
           	if(diff<0)
         {
             diff=diff+100;
         }
         else
         {
             diff=diff;
         }



            difference_matrix[p1][p2]=diff;
            p2++;
            if(p2==column){p2=0;p1++;}
            if((p2==column)||(p1==row)){ break;}

     }

     for(i=0;i<row;i++)
     {
         for(j=0;j<column;j++)
         {
           printf("%d ",difference_matrix[i][j]);

         }
         printf("\n");

    }

      fclose(fp1);
      fclose(fp2);
      return 0;
}
