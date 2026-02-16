
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main(void)
 {
    float a[4][4];
    float b[4];
    float c[4];
    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            a[i][j]=1;
        }
        b[i]=1;
    }
    printf("[");
    for(int i=0;i<4;i++)
    {
        float sum=0;
        for(int j=0;j<4;j++)
        {
            sum+=a[i][j]*b[j];
        }
        c[i]=sum;
        if(i!=3) printf("%f ",c[i]);
        else printf("%f",c[i]);
    }
    printf("]\n");
    return 0;
 }
