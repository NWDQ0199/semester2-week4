
/*
 * Factorial
*/

#include <stdio.h>

int main(void)
{
    int fLen=20;
    long f[fLen];
    f[0]=1;
    for(int i=0;i<fLen;i++)
    {
        if(i!=0)
        {
            f[i]=i*f[i-1];
        }
        if(i!=fLen-1) printf("%li, ",f[i]);
        else printf("%li\n",f[i]);
    }
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
}
