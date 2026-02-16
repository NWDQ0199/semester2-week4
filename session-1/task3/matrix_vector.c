
/*
* Matrix-vector product
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n=4;
    float **a, *b, *c;
    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    
    //allocation and initialisation
    a=malloc(n*sizeof(float*));
    for(int i=0;i<n;i++)
    {
        a[i]=malloc(n*sizeof(float));
        for(int j=0;j<n;j++)
        {
            a[i][j]=1;
        }
    }
    b=malloc(n*sizeof(float));
    for(int i=0;i<n;i++)
    {
        b[i]=1;
    }
    c=malloc(n*sizeof(float));    

    //matrix product
    printf("[");
    for(int i=0;i<n;i++)
    {
        float sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=a[i][j]*b[j];
        }
        c[i]=sum;
        if(i!=n-1) printf("%f ",c[i]);
        else printf("%f",c[i]);
    }
    printf("]\n");

    //freeing up a's contents, a, b and c
    for(int i=0;i<n;i++)
    {
        free(a[i]);
    }
    free(a);
    free(b);
    free(c);
    return 0;
 }
