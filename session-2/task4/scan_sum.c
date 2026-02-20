
#include <stdio.h>

int main(void)
{

    // define suitable data
    // use scanf to read from the terminal
    // print the output from scanf and the data values

    /*
    int a;
    int b;
    int count=scanf("%i %i",&a,&b);
    printf("%i+%i=%i\n",a,b,a+b);
    printf("Number of items scanned: %i\n",count);
    return 0;
    //*/

    //*
    int a;
    int b;
    char str[100];
    fgets(str,100,stdin);
    int count=sscanf(str,"%i %i",&a,&b);
    printf("%i+%i=%i\n",a,b,a+b);
    printf("Number of items scanned: %i\n",count);
    return 0;
    //*/
}