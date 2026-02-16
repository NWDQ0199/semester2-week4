
/*
* Dot product of 2 vectors
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n=5;
    //float *a, *b, *d;  // stack-based pointers
    float* a; //{1.0,1.0,1.0,1.0,1.0}
    float* b; //{2.0,3.0,4.0,5.0,6.0}
    float* d=0;

    // allocation of heap memory for vectors
    a=calloc(n,sizeof(float));
    b=calloc(n,sizeof(float));
    d=malloc(sizeof(float)); //float on heap not necessary but demonstrative
    //realloc resizes an array

    a[0]=1.0;a[1]=1.0;a[2]=1.0;a[3]=1.0;a[4]=1.0;
    b[0]=2.0;b[1]=3.0;b[2]=4.0;b[3]=5.0;b[4]=6.0;
    for(int i=0;i<n;i++)
    {
        *d+=a[i]*b[i];
    }
    printf("d: %f\n",*d);

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
}