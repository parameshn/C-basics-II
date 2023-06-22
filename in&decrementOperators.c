/*The answer lies in the prefix and postfix placements. If the ++ or -- is a prefix, C computes it before
anything else on the line. If the ++ or -- is a postfix, C computes it after everything else on the line finishes*/

#include <stdio.h>
void main()
{
    // --14; /* Don't do this! */

    int i = 2, j = 5, n;
    n = ++i * j;

    int ctr = 0;
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
}