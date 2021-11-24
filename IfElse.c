#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

    /* int a = 9;
    int b = 3;

    if (a == b)
    {
        printf("Banana\n");
    }
    else
    {
        printf("This cake is a lie\n");
    }
    if (a) // means (a != 0) if a doesnt equal 0
    {
        printf("a != 0\n");
    }
    else{
        printf("a == 0\n");
    }
    if (!a) // means (a == 0) if a does equal 0
    {
        printf("a == 0\n");
    }
    else{
        printf("a != 0\n");
    } */

    int a = 1;

    if (!a)
    {
        printf("a == 0\n");
    }
    else if (a < 0)
    {
        printf("a < 0\n");
    }
    else if (a > 0)
    {
        printf("a > 0\n");
    }
    
    printf("\n\n");
    return EXIT_SUCCESS;
}
