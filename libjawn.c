#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libjawn.h"


/* Library functions */
void encrypt_jawn(char *secret) {
    char data[20];
    int key = 54;
    int length = 0;
    int i = 0;
    char *s = secret;
    
    length = strlen(s);

    for (i = 0; i < length; i++)
    {
        data[i] = data[i]^key;
    }

    printf("Encrypted data: %s", data);

}

void decrypt_jawn(char *secret) {
    char data[20];
    int key = 54;
    int length = 0;
    int i = 0;
    char *s = secret;
    
    length = strlen(s);

    for(i=0; i<length; i++)
    {
        data[i] = data[i]^key;
    }

    printf("Decrypted Data: %s\n", data);

}