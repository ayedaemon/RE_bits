#include <stdio.h>
#define HELLO_MSG1 "Hello World1"

char HELLO_MSG2[] = "Hello World2";

int main() {
    char HELLO_MSG3[] = "Hello World3";
    printf("%s\n", HELLO_MSG1);
    printf("%s\n", HELLO_MSG2);
    printf("%s\n", HELLO_MSG3);
    return 0;
}
