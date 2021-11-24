#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

 /*    int iterations = 5;

    while (iterations > 0)
    {
        printf("i: %d\n", iterations);
        iterations--; // for every loop, minus 1 from iteration
    } */
    int iterations = 0;
    do
    {
        printf("i: %d\n", iterations--);// do this
       
    }
    while (iterations > 0); // keep doing this^

   

    printf("\n\n");
    return EXIT_SUCCESS;
}
