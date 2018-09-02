#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        //this is how you abort a program
        return 1;
    }

    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        switch(letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            
            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
            case 'Y':
                if(i > 2) {
                    //it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                    break;
                }
                //break;
            
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}

/*
Ch. 14 Switch statement
This program takes one argument. 
The argument needs to be inside "" as the program only checks for the letters of the first argument.

! Important !

Ok this is interesting how to solve the checking on single characters inside argument
Argv[1][i]
1 means the second argument (or the first real argument after ./ex13) in the array.
i means the "ith" character in the second argument. 1st, 2nd, 3rd, ect....
The code adds to int i and goes through all of the characters in the given argument.

Rules of switch-statements:
1. Always include a "default:" so you catch missing inputs
2. Use "break" to prevent "fallthrough"
    * Don't allow "fallthrough" unless there is a reason.
    * Comment "//fallthrough so others know it's on purpose"
3. switch-statements are really easy to break.
    * Try to use if-statements instead of switch-statements.
 

! Important !

In switch-statement you cannot use ex. case 'a': and case 97
at the same time because a has ASCII value of 97.
These are handled identically and switch-statement won't allow duplicates.
*/