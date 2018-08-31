#include <stdio.h>

int main (int argc, char *argv[])
{
    //go through each string in argv
    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    //lets do it backwards
    i = 0;
    int j= 3;
    while(i > j) {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }

    //let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

     i = 0;
    while(i < argc) {
        states[i] = argv[i];
        i++;
    }

    int num_states = 4;
    i = 0; //watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;

}

/*
Ch. 12 While-Loop and Boolean Expressions
In this chapter we used while loop to replicate how for-loop works.
Initializing of i and incrementing i are there.

You should favor for-loop over while-loop because for-loop is harder to break.

*/