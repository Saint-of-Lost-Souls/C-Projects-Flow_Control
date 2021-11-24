 #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

 
/*  do
    {
        some code 
        if(break_condition)
        {
            break;
        }
        some code
    } 
        
    while(test condition)
    {
        some code
        if(break_condition)
        {
            break;
        }
        some code
    }
    jump here 

    for (initialise; test_condition; update)
    {
        code
        if(break_condition)
        {
            break;
        }
    some code 
    }
    jump here 
 */

    int input, accumlator = 0;
    const int ITERATIONS = 10;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter a number (-1 to exit)");
        scanf("%d", &input);

        if(input == -1)
        {
            break;
        }
        accumlator += input;
    }
    printf("\nAccumlator = %d", accumlator);
    
    
    printf("\n\n");
    return EXIT_SUCCESS;
}
