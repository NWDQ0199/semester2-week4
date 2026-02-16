
/*
 * Transpose of a matrix
 */

#include <stdio.h>

int main(void)
{
    int a[4][4];
    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
    Print the transpose.
    */
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            a[i][j]=2*i-j;
        }
    }
    //PrintIntMatrix(&a,4,4);
    for(int i=0;i<4;i++)
    {
        printf("[");
        for(int j=0;j<4;j++)
        {
            if(j==3) printf("%i",a[i][j]);
            else printf("%i ",a[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
    int b[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    //PrintIntMatrix(&b,4,4);
    for(int i=0;i<4;i++)
    {
        printf("[");
        for(int j=0;j<4;j++)
        {
            if(j==3) printf("%i",b[i][j]);
            else printf("%i ",b[i][j]);
        }
        printf("]\n");
    }
    return 0;
}

/*int PrintIntMatrix(int* arr, int rows, int columns)
{
    //arr will point to the first element of the input array
    for(int i=0;i<rows;i++)
    {
        printf("[");
        for(int j=0;j<columns;j++)
        {
            if(j==columns-1) printf("%i",arr[i][j]);
            else printf("%i ",arr[i][j]);
        }
        printf("]\n");
    }
}*/