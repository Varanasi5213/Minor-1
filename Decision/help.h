struct Device // Structure to store the device specifications
{
    int status;
    int radius;
    int pos[2];
    float power;
    float Den;
};

void array(struct Device* D)
{

            D[0].Den=0;
            D[0].power=0;
            D[0].pos[0]=3;
            D[0].pos[1]=6;
            D[0].radius=3;
            D[0].status=0;
            D[1].Den=0;
            D[1].power=0;
            D[1].pos[0]=3;
            D[1].pos[1]=1;
            D[1].radius=3;
            D[1].status=0;
}

void dis(struct Device *D)
{
    printf("Density: %.1f\n",D->Den);
    printf("Power: %.1f\n",D->power);
    printf("Position X-axis: %d\n",D->pos[0]);
    printf("Position Y-axis: %d\n",D->pos[1]);
    printf("Radius: %d\n",D->radius);
    printf("Status: %d\n",D->status);
}

