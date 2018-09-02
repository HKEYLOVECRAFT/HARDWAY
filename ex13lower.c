#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Anna vain yksi argumentti.\n");
        printf("Jos tahdot antaa useamman argumentin, niin laita ne \" \" merkkien sisään.\n");   
    }

    /*
    This program converts given uppercase argument to lowercase
    First this is a for loop which has if-statement inside.
    It goes through all characters of the argument and converts
    uppercase to lowercase.
    */
    int i = 0;
    int j = 0;
    for(j = 0; argv[1][i] != '\0'; j++) {
        if (argv[1][i] <= 'Z' && argv[1][i] >= 'A') {
            char letter = argv[1][i];
            letter = letter + 32;
            argv[1][i] = letter;
            i++;
        }
        else {
            i++;
        }
    }

    /*
    This loop and switch-statement is almost identical to the default ex13.
    There just are no cases for uppercase characters.
    */

    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        switch(letter){
            case 'a':
                printf("%d. a\n", i);
                break;
            
            case 'e':
                printf("%d. e\n", i);
                break;

            case 'i':
                printf("%d. i\n", i);
                break;

            case 'o':
                printf("%d. o\n", i);
                break;

            case 'u':
                printf("%d. u\n", i);
                break;

            case 'y':
                printf("%d. y\n", i);
                break;

            default:
                printf("%d. %c is not vowel\n", i, letter);
        }       
            
    }
}