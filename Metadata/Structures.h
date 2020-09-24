#include <stdio.h>
#include <string.h>
/* Declaring Structure */
struct Fans {
    int status;
    int radius;
    int pos[2];
    float density;
    float power;
};
struct Room{
    int column;
    int row;
    int numberoffans;
    int numberoflights;
};
void addfan(struct Fans f,int status,int radius,int pos1,int pos2,float density,float power)
{
    f.status=status;
    f.radius=radius;
    f.pos[0]=pos1;
    f.pos[1]=pos2;
    f.density=density;
    f.power=power;
}

void addroom(struct Room r,int row,int column,int numberoffans,int numberoflights)
{
        r.row=row;
        r.column=column;
        r.numberoffans=numberoffans;
        r.numberoflights=numberoflights;
}



