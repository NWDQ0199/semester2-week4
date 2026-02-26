
/*
Name: oscar hazel
Student ID: 201941466
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if(argc>11||argc<2)
    {
        //more than 10 arguments (plus the one for the filename)
        printf("Usage: %s inputs\n",argv[0]);
        printf("Example: %s this is my message\n",argv[0]);
        return 1;
    }
    int totalLength=0;
    // define appropriate data to hold your answer
    for(int i=1;i<argc;i++)
    {
        //i=1 since argv[0] is the command name
        int len=strlen(argv[i]);
        if(len>4||len<1)
        {
            printf("All inputs must be 1-4 characters long.\n");
            return 1;
        }
        totalLength+=len+1;
        //+1 since dashes are also required, plus a null terminator at the end
    }
    char buffer[totalLength];
    // process the command-line data using appropriate string functions
    for(int i=1;i<argc;i++)
    {
        strcat(buffer,argv[i]);
        if(i!=argc-1) strcat(buffer,"-");
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}