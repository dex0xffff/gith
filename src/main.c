// a c program to make git easier
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/gith.h"
#include "../include/gith.c"

int 
main(int argc, char* argv[]) 
{
    printf("Running...\n\n");
    int argnum = argc-1;
    int success = 0;
    char command[CMD_SIZE];
    
    // switch on the number of arguments passed
    switch(argnum) {
        case 0:
            printUsage();
            return 0; break;

        case 1: 
            runcommand(parsearg(argv[1])); 
            break;

        case 2: 
            runcommand(buildcommand(argv,command));
            break;

        default:
            printUsage();
            break;
    }
    printEnd(); 
    return 0;
}

