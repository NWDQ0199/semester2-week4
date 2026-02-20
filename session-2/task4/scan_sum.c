
#include <stdio.h>

int main(void)
{

    // define suitable data
    int a;
    int b;
    // use scanf to read from the terminal
    int count=scanf("%i + %i =",&a,&b);
    /*char str[100];
    fgets(str,100,stdin);
    int count=sscanf(str,"%99s",str);*/
    // print the output from scanf and the data values 
    printf(" %i\n",a+b);
    printf("Number of items scanned: %i\n",count);
    return 0;
}