/*
    File: argv_printer.c
    Description: Prints the CLI arguments passed to the program
*/

#include <stdio.h>

int main(int argc, char** argv) {

    if(argc > 0) {
        for(int i=0; i<argc; i=i+1) {
            printf("argv[%d] = %s\n", i, argv[i]);
        }
    }
    else {
        printf("There are no argv arguments!\n");
    }

    return 0;
}
