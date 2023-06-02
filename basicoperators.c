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

    // Two sets of equivalent variables, with one set
    // floating-point and the other integer

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;
    // Using two float variables creates an answer of 3.8
    floatAnswer = a / b;
    printf("\n%.1f divided by%.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y; // Take 2 creates an answer of 3.0
    printf("%d divided by %d equals to %.1f\n", x, y, floatAnswer);

    // This will also be 3, as it truncates and doesn't round up

    intAnswer = x / y; // Take 2 creates an answer of 3.0
    printf("%.1f divided by %.1f equals %d\n", x, y, intAnswer);

    // This will also be 3, as it truncates and doesn't round up
    intAnswer = a / b;
    printf("%d divided by %d equals to %d\n", a, b, intAnswer);

    intAnswer = x % y; // This calculates the remainder (4)
    printf("%d modulus (i.e. remainder of) %d equals %d", x, y, intAnswer);

    ////////////////////////You can’t use % between anything but integer data types.//////////////////

    /*You now know the three ways C divides values: regular division if a float is on either or both sides
    of the /, integer division if an integer is on both sides of the /, and modulus if the % operator is used
    between two integer



    So, when one operand is a float and the other is an int, C will promote the int to a float and perform regular division, resulting in a float value as the output.
    /////////////////////////////////////////////////////////////////////////////////////////////
    So, if both operands are int but the result is assigned to a float variable, C will promote the division to regular division and produce a float result.
    /////////////////////////////////////////////////////////////////////////


    In programming, operands refer to the values or variables that are used in an operation. An operation typically involves one or more operands and an operator that defines the action to be performed on the operands.

    For example, in the expression a + b, a and b are the operands, and the + operator specifies the addition operation to be performed on those operands.

    */
    int ans, avg, i, k, c, d, e, f, g, h, i, j, l;

    ans = 5 + 2 * 3; /* Puts 11 in ans */
    /*C follows the rules of precedence and associativity for evaluating expressions, similar to the BODMAS (Bracket, Order, Division and Multiplication, Addition and Subtraction) rule in mathematics.

    Precedence, also known as operator precedence or operator priority, is a rule that determines the order in which operators are evaluated in an expression. It specifies which operations take precedence over others when there are multiple operators present in an expression.

 Operators with higher precedence are evaluated before operators with lower precedence. If multiple operators have the same precedence, the associativity of the operators determines the evaluation order.

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
 Parentheses: Expressions enclosed in parentheses have the highest precedence. They are evaluated first, allowing you to control the grouping and order of operations within parentheses.

 Unary operators: Unary operators, such as negation (-), increment (++), decrement (--), and logical negation (!), have the next highest precedence. They are applied to a single operand before any binary operations.

 Multiplicative operators: Multiplication (*), division (/), and modulus (%) have higher precedence than the additive operators. They are evaluated from left to right.

 Additive operators: Addition (+) and subtraction (-) have lower precedence than the multiplicative operators. They are also evaluated from left to right.

 Relational and equality operators: Relational operators (<, >, <=, >=) and equality operators (==, !=) have lower precedence than the additive operators. They are evaluated from left to right.

 Logical operators: Logical AND (&&) and logical OR (||) have lower precedence than the relational and equality operators. They are evaluated from left to right.

 Assignment operators: Assignment operators (=, +=, -=, etc.) have the lowest precedence. They are evaluated from right to left, allowing multiple assignments in a single expression.

 */

    ans = 5 + 2 * 4 / 2 % 3 + 10 - 3; // output 13
    /*contains more than one operator that sits on the same
level in the order of operators table, you must use the third column, labeled Associativity, to
determine how the operators are evaluated. In other words, because *, /, and % all reside on the
same level, they were evaluated from left to right, as dictated by the order of operators table’s
Associativity column.
*/

    avg = i + j + k + l / 4;
    /*so l/ 4 is evaluated first and then i, j, and k are added to that divided result. If you want to override
the order of operators, as you would do in this case, you have to learn to use ample parentheses
around expressions.
*/

    /////// Break the Rules with Parentheses/////////
    ans = (5 + 2) * 3; /* Puts 21 in ans */
                       /*Even though multiplication is usually performed before addition, the parentheses force C to evaluate
                   5 + 2 first and then multiply the resulting 7 by 3.parentheses have top
                   precedence*/
                       ///////////////////////////
                       /*Assignment has very low priority in the table, and it
                       associates from right to left.
                       : You can assign a value to more than one variable in the same expression
                       */
    int a = 9;
    b = 9;
    c = 9;
    d = 9;
    e = 9;
    f = 9;
    g = 9;
    h = 9;
    i = 9;
    j = 9;

    int a = b = c = d = e = f = g = h = i = j = 9; // this is easier

    // Because of the right-to-left associativity, C first assigns the 9 to j, then puts the 9 in i, and so on.
    a = 5 * (b = 2); /* Puts a 2 in b and a 10 in a */

    /* This program calculates the average of four grades and also does
some other basic math. */

    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;
    /* The student got 88s on the first and third test,
    so a multiple assignment statement works. */
    grade1 = grade3 = 88;
    grade2 = 79;
    // The user needs to enter the fourth grade
    printf("What did you get on the fourth test");
    printf(" (An integer between 0 and 100)?");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    printf("Your average is %.1f.\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);

    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade in the class (95)\n");
    printf("You are %.1f percent behind ", percentDiff);
    printf("that grade!\n\n\n");
    return 0;
}