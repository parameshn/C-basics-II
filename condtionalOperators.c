//////////////////////////////conditional operators///////////////////////////////////////////////
///////////////////increment operators, and decrement operators./////////////////////////////////
/// The conditional operator is the only C operator that requires three arguments//////

/*The conditional operator looks like this: ?:
/////// Here is its format: relation ? trueStatement : falseStatement;///////////////////////////////
 */

#include <stdio.h>
void main()
{
    float total = 1.4;
    (total <= 3850.0) ? (total *= 1.10) : (total *= 1.05);
    printf("total=%.2f", total); // output 1.32

    /*The parentheses are not required, but they do help group the three parts of the
conditional operator so that you can see them easier*/

    (total == 1.2) ? (total -= 0.2) : (total += 0.2);
    printf("\ntotal=%.4f", total); // output 1.54 + 0.2 = 1.74

    (total = 1.2) ? (total -= 0.2) : (total += 0.2);
    printf("\ntotal=%.4f", total); // output 1.2 - 0.2 = 1.00

    /*The result of (total = 1.2) is used as the condition. In C, any non-zero value is considered true, so the condition is true.
Therefore, the expression (total -= 0.2) is executed, subtracting 0.2 from total. However, since total is already 1.2, the resulting value would be 1.0*/

    int x = 5;
    int result = (x > 10) ? (x * 2) : ((x + 1) * 3);
    printf("\nresult=%d", result); // output (5+1)=6*3=18

    result = x > 10 ? x * 2 : x + 1 * 3;
    printf("\nresult=%d", result); // output 3*1=3+5=8

    /*since there are no parentheses, the operator precedence rules of C come into play. The multiplication (*) operator has higher precedence than the addition (+) operator, so x + 1 * 3 is evaluated as x + (1 * 3), resulting in x + 3.

Thus, the value of result will be x + 3 when x is not greater than 10, and x * 2 when x is greater than 10.*/
    ////////////////////
    /*C programmers don’t like the redundancy you saw in the earlier use of the conditional operator. As
    you can see, the total variable appears twice. Both times, it is being assigned a value. When you
    face such a situation, take the assignment out of the conditional operator’s statements:
    */
    total *= (total <= 3850.0) ? (1.10) : (1.05);
    printf("\ntotal =%f", total); // output 1 * 1.10 = 1.100
}