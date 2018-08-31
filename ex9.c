#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[4] = {'a', 'a', 'a', '\0'};

    //first, print them out raw
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1],
            name[2], name[3]);

    printf("name: %s\n\n", name);

    //setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    //then print them out initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    //This is my test
    //setup the numbers
    numbers[0] = 'a';
    numbers[1] = 'b';
    numbers[2] = 'c';
    numbers[3] = 'd';

    //setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = 'a';

    //then print them out initialized
     printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1],
            name[2], name[3]);

    //print the name like a string
    printf("name: %s\n\n", name);

    //another way to use name
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1],
            another[2], another[3]);

    return 0;

}

/*
Ch. 10 Arrays and strings
In here are two ways for doing a string:
1. char name[4] = {'a'}
2. char *another = "name"

When using characters in int numbers[4] array, it gives a number
corresponding the characters ASCII value?
numbers[0] = 'a' => 97
numbers[1] = 'b' => 98
Why is this?

! IMPORTANT !
char strings need a terminator '\0' as the last character in array. 
For some reason it doesn't change anything for me if I don't leave space for it.
Apparently forgetting the terminator is the 1. source of bugs in C.
Apparently later in this book we learn how to avoid C strings completely.

*/