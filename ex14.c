#include <stdio.h>
#include <ctype.h>

//forward declaration
int can_print_it (char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;

    for(i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if(can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[]) 
{
    print_arguments(argc, argv);
    return 0;
}


/*
Ch. 15 Writing and using functions
First chapter to introduce functions.
This program prints input arguments ASCII codes, but shows numbers as empty/space.

In C you need to declare functions before using them. 
Write them down just after header #includes.

Don't get fooled by that "arg[]" argument in print_letters function
It's just a new array created to contain the user inputted arguments.
A copy of argv[]. Why not just use argv[]?

ctype.h includes new functions "isalpha" and "isblank"
These figure out if the given input is an alphabet or a "space" character.
I've commented "can_print_it" function, because it was obsolete. (And removing it was a part of assignment.)


*/