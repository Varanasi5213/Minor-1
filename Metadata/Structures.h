struct Room{
    int column;
    int row;
    int numberoffans;
    int numberoflights;
};
struct Device {
    int status;
    int radius;
    int pos[2];
    float Den;
    float power;
};

struct Room inp()
{
    struct Room R;
    FILE *file = fopen("Metadata.txt","r+");

    fscanf(file,"%d,%d,%d,%d",&R.row,&R.column,&R.numberoffans,&R.numberoflights);
    fclose(file);
    return R;

}
void values(struct Device* D)
{
    struct Room R;
    FILE *f = fopen("Metadata.txt","r+");
    fscanf(f,"%d,%d,%d,%d",&R.row,&R.column,&R.numberoffans,&R.numberoflights);
    for(int i=0; i<R.numberoffans; i++)
    {
        fscanf(f,"%d,%d,%d,%d",&D[i].pos[0],&D[i].pos[1],&D[i].radius,&D[i].power);
    }
    fclose(f);
}


