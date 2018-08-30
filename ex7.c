#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", 
        bugs, bug_rate);

    unsigned long universe_of_defects = 
    1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", 
        universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", 
        expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", 
        part_of_universe);

    //This makes no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", 
        care_percentage);

    printf("Test print %c", nul_byte);

    return 0;

}

/*
ex7 More variables, some math
This bit demonstrates how some math works in C.
To C "character" is a integer. Really small integer.
Which means you can do math with them.

'\0' is a null byte. Effectively number 0. 
It is Also a direct access to the machine.

Test print ^
When null_byte is printed with %s it gives = (null)
When null_byte is printed with %c it gives nothing.

When long universe_of_defects is given too long number,
compiler warning gives "overflow" and prints 0.

When edited long -> unsigned long it was still too big of a number.

"An int is signed by default, 
meaning it can represent both positive and negative values. 
An unsigned is an integer that can never be negative."

So because unsigned cannot represent negative numbers,
it can represent twice as much positive numbers,
because the range shifts

!! This is important!!
*/