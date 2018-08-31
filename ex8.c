#include <stdio.h>

int main(int argc, char *argv[])
{

    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
         char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };
   

    //WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n",
            sizeof(areas));
    printf("The number of ints in areas: %ld\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d. \n\n",
            areas[0], areas[1]);
    
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n",
            sizeof(name));
    printf("The number of chars: %ld\n\n",
            sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n",
            sizeof(full_name));
    printf("The number of chars: %ld\n\n",
            sizeof(full_name) / sizeof(char));
    
    printf("name=\"%s\" and full_name=\"%s\"\n",
            name, full_name);

    return 0;
}
/*
Ch. 9 Sizes and Arrays
Lessons learned:
These two are identical methods of creating a char array.
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

Apparently there should be some errors in full_name array,
when removing the last '\0', but it the output doesn't change at all for me.

And of course when giving names[0] value of names[10]
The output is not correct because it checks outside of initialized
*/
