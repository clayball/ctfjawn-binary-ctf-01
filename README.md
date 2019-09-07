# CTFJawn, Binary Analysis Challenges, 01

!!! THIS IS A WORK IN PROGRESS !!!

The challenges included in this repo were made for those new to binary
analysis. The first few challenges will introduce you to commonly used tools
and techniques. You will be required to compile and debug the C programs that
have been created for you. You are encouraged to modify these programs and
experiment.

For each C program the required tools will be listed. Links to relevant
resources will also be included.

The goals of these challenges are..
- to teach you some of the basic techniques used to extract information from
  ELF (Linux) and PE (Windows) formatted binaries
- to introduce you to some of the tools used to extract information from
  executables
- TODO

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
- TODO
