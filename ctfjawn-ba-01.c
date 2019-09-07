#include <stdio.h>
#include "libjawn.h"

/*
 * ctfjawn-ba-01.c
 *
 * This is one of a few binary challenges which are intended to teach those new
 * to the world of binary analysis.
 *
 * gcc -g ctfjawn-ba-01.c -o ctfjawn-ba-01
 *
 */

/********* FUNCTIONS *********/
void cm9sbHdpdGhyaWNr() {
    char rwr[] = "just cause";
    // TODO
    printf("\n");
}

void c2VjcmV0 (){
    char c2c[] = "10.100.67.7";
    // TODO
    printf("C2C: %s\n", C2C);
}

void display_message() {
    printf("==================================================\n");
    printf("    CTFJawn, Binary Analysis Challenge, 01\n");
    printf("==================================================\n\n");
}

/********* MAIN *********/
int main() {
    int i = 0;
    /*
     * using gdb, run this program and set i=1 so that the function c2VjcmV0()
     * executes
     */
    display_message();

    printf("Calling a function if a condition is True..\n\n");
    if (i == (6-5)) {
        c2VjcmV0();
    }

    printf("Goodbye\n\n");
    return 0;
}