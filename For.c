#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

    for (int i = 0; i < 5; i++) // (initilisation; test; update)
    {
        printf("i - %d\n", i);
    }

    for (int i =0, j = 5; i < j; i++, j--)
    {
        printf("i = %d, j = %d\n", i, j);
    }
    for (char x = 10; x < 15; x++)
    {
        for ( char j = 10; j < 15; j++)
        printf("*\n");
    }


    

    printf("\n\n");
    return EXIT_SUCCESS;
}
