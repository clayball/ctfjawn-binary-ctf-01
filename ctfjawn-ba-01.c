#include <stdio.h>
#include <string.h>

#include "ctfjawn.h"

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
    // The gift that keeps on giving
    printf("aHR0cHM6Ly93d3cueW91dHViZS5jb20vd2F0Y2g/dj1kUXc0dzlXZ1hjUQ==\n");
}

void show_secret (){
    // Show the flag
    printf("flag0x01: %s\n", FLAG0x01);
}

void validate_guess (char *guess) {
    char *g = guess;
    //printf("DEBUG: g=%s, SECRET=%s\n", g, SECRET);
    if (strcmp(g, SECRET) == 0) {
        printf("Correct! \n");
        show_secret();
    } else {
        printf("Wrong. Try again\n");
    }
}

void display_message() {
    printf("==================================================\n");
    printf("    CTFJawn, Binary Analysis Challenge, 01\n");
    printf("==================================================\n\n");
}

/********* MAIN *********/
int main(int argc, char *argv[]) {
    int i = 0;
    char * guess = argv[1];  // yeah, so?

    /*
     * using gdb, run this program and set i=1 so that the function 
     * show_secret() executes
     */
    display_message();

    printf("Entered guess: %s\n", guess);

    /* Two ways to trigger True statements
     * 1. modify i using gdb
     * 2. read memory address of the variable being compared to guess
     */
    if (i == (6-5)) {
        show_secret();
    }

    validate_guess(guess);

    /* This function is included in the libctfjawn library */
    decrypt_jawn();

    printf("Goodbye\n\n");
    return 0;
}
