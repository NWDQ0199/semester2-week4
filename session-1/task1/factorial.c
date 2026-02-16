
/*
 * Factorial
*/

#include <stdio.h>

int main(void)
{
    int fLen=20;
    int f[fLen];
    f[0]=1;
    for(int i=1;i<fLen;i++)
    {
        f[i]=i*f[i-1];
        if(i!=fLen-1) printf("%i, ",f[i]);
        else printf("%i\n",f[i]);
    }
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
}
