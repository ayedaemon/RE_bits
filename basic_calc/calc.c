#include <stdio.h>
#include <stdlib.h>


int addFunc(int a, int b) {
    return a + b;
}

int subFunc(int a, int b) {
    return a - b;
}

int mulFunc(int a, int b) {
    return a * b;
}

int divFunc(int a, int b) {
    return a / b;
}




void die() {
    printf("Not enough arguments passed\n");
    printf("Usage: ./calc <num1> <operator> <num2>\n");
    exit(1);
}

void main(int argc, char *argv[])
{   
    if(argc < 4) die();


    int x = atoi(argv[1]), y = atoi(argv[3]);
    char option = *argv[2];
    int (*fp) (int, int);

    switch(option) {
        case '+': {
                      fp = addFunc;
                      break;
                  }
        
        case '-': {
                      fp = subFunc;
                      break;
                  }
        
        case '*': {
                      fp = mulFunc;
                      break;
                  }
        
        case '/': {
                      fp = divFunc;
                      break;
                  }
                  
    }

    printf("%d %c %d = %d\n", x, option, y, fp(x,y));
}
