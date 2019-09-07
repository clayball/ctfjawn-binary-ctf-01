# CTFJawn, Binary Analysis Challenges 0x01

The challenges included in this repo were made for those new to binary
analysis. The first few challenges will introduce you to commonly used tools
and techniques. You will be required to compile and debug the C programs that
have been created for you. You are encouraged to modify these programs and
experiment.

For each C program the required tools will be listed. Links to relevant
resources will also be included.

The main goal of these challenges is to teach you how to extract information
from ELF (Linux) and PE (Windows) formatted binaries 

## ctfjawn-ba-01.c

Commands/Tools

- strings
- readelf
- objdump
- gcc
- gdb

Compile ctfjawn-ba-01.c and answer the following questions.

```gcc -g ctfjawn-ba-01.c -o ctfjawn-ba-01```

- What's the entry point address?
- Display the contents of all ELF headers.
- At what address does main start?
