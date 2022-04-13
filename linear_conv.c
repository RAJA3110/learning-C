#include<stdio.h>

float a[4]= { 2,2,2,2};
float b[4]= {1,2,3,4};
float y[10];

void main()
{
    int length , i=0, j;
    int alen=4 , blen = 4;
    length=alen+blen-1;
    for (i=0;i<length;i++)
    {
        y[i]=0;
        for (j=0;j<blen;j++)
        {
            if (((i-j)<alen)&((i-j)>=0))
            {
               y[i]=y[i]+a[j]*b[i-j];
            }
        }
        printf("%f\t", y[i]);
    } 

}