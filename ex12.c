#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;

    if(argc == 2) {
        printf("You only have one argument. You suck.\n");
    }
    else if(argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");

        for(i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }
    else {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}

/*
Ch. 13 If, else-if, else
This is just a small sweet chapter about condition statements.
There is three branching outputs for user input.
User needs to input exactly two arguments, else it yells.

!The code doesn't really need else if and else, after if.
But they are a convenience.

Just noticed that when I'm not giving any arguments after ./ex12
the code gets the preset arguments from launch.json. 
Those are set in vscode for debugging. But what about when 
the code needs multiple instances of user input? Is that even possible with C?
*/