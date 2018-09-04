#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declaration
int can_print_it (char ch);
void print_letters(char arg[], size_t lenght);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    size_t lenght = 0;
    //Stores an argument's lenght
    lenght = strlen(argv[i]);

    //this sends forward a single argument and it's lenght
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], lenght);
    }
}

void print_letters(char arg[], size_t lenght)
{
    int i = 0;

    /*
    as the assignment wants now 
    this loop checks characters against the argument's lenght
    Not searching for \0 terminator.
    */
    for(i = 0; arg[i] < lenght; i++) {
        char ch = arg[i];

        if(isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) 
{
    print_arguments(argc, argv);
    return 0;
}


/*
Ch. 15 Writing and using functions
EXTRA CREDITS

    needed to remove "can_print_it" function
    have print_arguments figure how long each argument string is
    using "strlen"
    and pass that lenght to print_letters.
    Use that lenght instead of relying in \0 terminator.

! IMPORTANT !
Remember that always the errors are not logical problems.
For strlen to work, it needs string.h file!

strlen returns "size_t" type
size_t is a unsigned integer type
and it represents size of objects in bytes
Many functions use it ex. malloc, memcpy, strlen
*/