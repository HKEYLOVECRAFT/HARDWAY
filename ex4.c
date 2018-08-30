#include <stdio.h>

/*  
    First time fixing code using valgrind. 
    This code is identical to ex3.c, but had errors.    
    Is now fixed.
    Run: valgrind ./ex4 after make.
*/

int main()
{
    int age = 10;
    int height = 76;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;
}