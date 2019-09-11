#include <stdio.h>
#include <string.h>

/*
 * ctfjawn.h
 * 
 * Compile shared library then compile and link it.
 * $ gcc -o ctfjawn.o -fPIC -c ctfjawn.c
 * $ gcc -shared -o libctfjawn.so ctfjawn.o -lm
 * $ cp libctfjawn.so ~/local/lib/
 * $ gcc -o ctfjawn-ba-01 ctfjawn-ba-01.c -L/home/cwells/local/lib -lctfjawn
 */

#ifndef LIBCTFJAWN_H
#define LIBCTFJAWN_H

/* TODO: encrypt/modify FLAG0x01 */
const char * SECRET = "dCTTSDrCU]E";
const char * FLAG0x01 = "aHR0cDovL3d3dy5waHJhY2sub3JnL2lzc3Vlcy83LzMuaHRtbCNhcnRpY2xl";
char DEC[] = "0123456789a";

extern void decrypt_jawn();

#endif