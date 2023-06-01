/*A lot of C operators work exactly the way you expect them to. You use a plus sign (+) when you want
to add, and you use a minus sign (-) when you want to subtract. An expression includes one or more
operators. C programmers often use math expressions on the right side of the assignment operator
when filling variables with values, like this:*/

/*
totalSales = localSales + internationalSales - salesReturns;
C computes the answer and then stores that answer in totalSales.*/
///////////
/*
//////
If you want to subtract a negative value, be sure to put a space between the minus signs,
like this:
newValue = oldValue - -factor;


If you omit the space, C thinks you’re using another operator, --, called the decrement
operator, described in

*/

#include <stdio.h>
void main()
{
    int age = 6;
    //  You can even put a math expression inside a printf() :
    printf("In 3 years, I'll be %d years old.\n", age + 3);

    /*If you want to multiply and divide, you can do so by using the * and / symbols. The following
statement assigns a value to a variable using multiplication and division:*/
    int newFactor, fact;
    newFactor = fact * 1.2 / 0.5;

    int king, lol, back;
    king = 5;
    lol = 6;
    back = -5;

    printf("the values %d", king + lol);
    printf("the values %d", king - back);  // output 10 (5-(-5))
    printf("the values %d", king - -back); // output 0 (5-(-(-5)))

    /* This program asks the user for a number of tires and price per
tire. It then calculates a total price, adding sales tax. */
    newFactor = 2 * 3 + 4;
    printf("VALUE IS %d", newFactor);
    /* This is a sample program that demonstrates math operators, and
the different types of division. */
}
