//HERE IS THE CODING
// PROGRAM EXAMPLE FOR THE COMMAND LINE ARGUMENTS USING ARGC AND ARGV IN FILES
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *fsource, *ftarget;
    char ch;

    if (argc != 3)
    {
        puts("The arguments are not Sufficient");
        exit(0);
    }

    fsource = fopen(argv[1], "r");
    if (fsource == NULL)
    {
        puts("Cannot open the Source file");
        exit(0);
    }

    ftarget = fopen(argv[2], "w");
    if (ftarget == NULL)
    {
        puts("Cannot open the Target file");
        fclose(fsource);
        exit(0);
    }

    while (1)
    {
        ch = fgetc(fsource);
        if (ch == EOF)
            break;
        else
            fputc(ch, ftarget);
    }

    printf("\nHello, The %s file has been created successfully", argv[2]);

    fclose(fsource);
    fclose(ftarget);

    getch();  // Waits for a key press so you can see output
}
