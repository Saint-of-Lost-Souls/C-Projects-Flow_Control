#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");

  /*   while(test_condition)
    {
        if(some_condition)
        {
            continue;
        }
        *skipped code*
        "end of the loop body"
    }

    do{
        some _code
        if(continue_condition)
        {
            continue;
        }
        *skipped code*
        "end of the loop body"
    }
    while(test condition);

    for (intialise; test_condition;update)
    {
        code
        if(continue_condition)
        {
            continue;
        }
        *skipped code*
        "End of loop body"
    } */

    int input, accumlator = 0;
    const int ITERATIONS = 5;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &input);

        /* if(input < 0)
        {
            continue;
        }
        accumlator += input;  */
        accumlator += input > 0 ? input : 0;
    }
    printf("\nAccumlator = %d", accumlator);


    printf("\n\n");
    return EXIT_SUCCESS;
}
