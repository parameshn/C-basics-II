//////COUNTER OPERATORS/ASSIGNMENT OPERATORS // LEFT TO RIGHT
/*A counter variable is a variable that you add 1 to when a certain
event takes place

COMPOUND ADDITION OPERATOR +=
COMPOUND DIVISION OPERATOR /=
COMPOUND MULTIPLICATION OPERATOR *=
COMPOUND SUBRACTION OPERATOR -=
COMPOUND MODULOUS OPERATOR %=
*/

#include <stdio.h>
void main()
{
    int lossCount, sales;
    lossCount = lossCount + 1; /* Adds 1 to lossCount variable */

    sales = sales * 1.25; /* Increases sales by 25 percent */

    /////COMPOUND ADDITION OPERATOR +=  //////////////////////////////////////////////////////////
    /*If you want to add 1 to a variable, you can use the compound addition operator, +=. These two statements produce the same result: */
    lossCount = lossCount + 1; /* Adds 1 to lossCount variable */

    lossCount += 1; /* Adds 1 to lossCount variable */

    /////COMPOUND MULTIPLICATION OPERATOR *=  ////////////////////////////////////////////////////
    // Instead of multiplying sales by 1.25 and then assigning it to itself like this:
    sales = sales * 1.25; /* Increases sales by 25 percent */

    sales *= 1.25; /* Increases sales by 25 percent */

    ////COMPOUND DIVISION OPERATOR /=  //////////////////////////////////////////////////////////

    sales = sales / 4; // divides sales by 4
    sales /= 4;        // divides sales by 4

    ////COMPOUND MODULOUS OPERATOR %=  ////////////////////////////////////////////////////
    ////COMPOUND SUBRACTION OPERATOR -=  //////////////////////////////////////////////////

    /* This program also increases a counter from 1 to 5, printing updates
and then counts it back down to 1. However, it uses compound Coperators*/

    int ctr = 0;

    ctr += 1; // increases counter to 1
    printf("counter is at %d.\n", ctr);
    ctr += 1; // increases counter to 2
    printf("counter is at %d.\n", ctr);

    /////////////////////////////////////////////////////
    printf("counter is at %d.\n", ctr + 1);  // adds one to ctr but does not increase the ctr value
    printf("counter is at %d.\n", ctr += 1); // increases counter to 3

    /*printf("counter is at %d.\n", ctr + 1);
This statement prints the value of ctr + 1 without modifying the value of ctr. It simply evaluates the expression ctr + 1 and passes the resulting value as an argument to printf. If you want to print the current value of ctr without changing it, this is the appropriate choice.

printf("counter is at %d.\n", ctr += 1);
This statement also prints the value of ctr + 1, but it has an additional side effect of incrementing the value of ctr by 1. The += operator adds 1 to the value of ctr and assigns the result back to ctr. If you intend to both print the incremented value and update ctr, this is the suitable option.*/

    ctr += 1; // increases counter to 4
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1);
    ctr -= 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    printf("Counter is at %d.\n", ctr -= 1);
    printf("Counter is at %d.\n", ctr -= 1);
    printf("Counter is at %d.\n", ctr -= 1);

    /////The compound operators reside on a low level.

    int total;
    total = 5;
    total *= 2 + 3; /* Updates the total variable */ // output is 25

    /*At first glance, you might think that the value of total is 13 because you learned earlier that
multiplication is done before addition. You’re right that multiplication is done before addition, but
compound multiplication is done after addition, according to the order of operators. Therefore, the 2
+ 3 is evaluated to get 5, and then that 5 is multiplied by the old value of total (which also
happens to be 5) to get a total of 25,*/
}