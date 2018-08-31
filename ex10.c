#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    //go through each string in argv
    //why am I skipping argv[0]?
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    //let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas", NULL
    };
    int num_states = 5;

    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}

/*
Ch. 11 Arrays of strings, looping
In this we need to pass arguments with the running program.
./ex10 i am a bunch of arguments
argc counts the number of individual arguments (in this case 7 because ./ex10 is number 1)

The output completely jumps the first loop if there are no additional arguments,
because the first for loop wants i < argc but argc = 1 and i = 1 so it skips.
The loop starts argv[i] at 1 because ./ex10 is in the first slot of the array 0.
So if int i would be set to 0, then output would show "arg 0: ./ex10"

If *states[] is given one less words then the last print is empty.
Instead if one of the words is NULL, then the output says (null)

! IMPORTANT !
Ok so if these are two ways to output the same string
char *str = "blah"; 
AND
char str[] = {'b', 'l', 'a', 'h'};

Then by combining them it is possible to make 2-dimensional array like above.
Array of strings. 
char *states[] = {"blah", "bleh", "lmao"}
This way each element of the array has an array the size of the word written inside "".


*/