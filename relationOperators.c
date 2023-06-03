///////////RELATION OPERATORS  RIGHT TO LEFT
/*relational operators, which permit testing of data
== EQUALS TO
>= GREATER THAN OR EQUAL TO
<= LESSER THAN OR EQUAL TO
< LESSR THAN
> GREATER THAN
!= NOT EQUALS TO */

////// A regular operator produces a mathematical result. A relational operator produces a true or false result
#include <stdio.h>
#define CURRENTYEAR 2013
void main()
{
    int i = 5;
    int j = 10;
    int k = 15;
    int l = 5;
    // the following statements are true:
    i == l;
    j < k;
    k > i;
    j != l;
    // The following statements are not true, so they are false:

    i > j;
    k < j; // dont compare unlike data types
    k == l;

    ///== (Equality Operator):
    // It is used to compare two values for equality.

    //= (Assignment Operator): It is used to assign a value to a variable

    int a, b;

    a = (4 < 100); //// (4 < 10) is true, so a 1 is put in a
    b = (1 == 5);  //(1 == 5) is false, so a 0 is put in b

    printf("a is %d and b is %d", a, b); // output a is 1 and b is 0

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Using if
    /*The if statement uses relational operators to perform data testing
     Here’s the format of the if statement: if (condition) { block of one or more C statements; }

     The parentheses around the condition are required. The condition is a relational test like
those described in the preceding section. The block of one or more C statements is called the body of
the if statement. The braces around the block of one or more C statements are required if the body
of the if contains more than a single statement.

*/

    /* This program asks the user for their birth year and calculates
    how old they will be in the current year. (it also checks to make
    sure a future year has not been entered.) It then tells the user if
    they were born in a leap year. */

    int yearBorn, age;
    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);
    // This if statement can do some data validation, making sure
    // the year makes sense
    // The statements will only execute if the year is after the
    // current year
    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Want to try again with a different year?\n");
        printf("What year were you born?\n");
        scanf(" %d", &yearBorn);
    }
    age = CURRENTYEAR - yearBorn;
    printf("\nSo this year you will turn %d on your birthday!\n",
           age);
    // The second if statment uses the modulus operator to test if
    // the year of birth was a Leap Year. Again, only if it is will
    // the code execute
    if ((yearBorn % 4) == 0)
    {
        printf("\nYou were born in a Leap Year--cool!\n");
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Using else
    /*This section explains the else statement that you
can add to if. Using else, you can specify exactly what happens when the relational test is false.

if (condition)
{block of one or more C statements;}
else
{ block of one or more C statements; }

Put semicolons only at the end of executable statements in the body of the if or the
else. Never put a semicolon after the if or the else; semicolons go only at the end
of complete statements.


*/
    int yearBorn, age;
    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);
    // This if statement can do some data validation, making sure
    // the year makes sense
    // The statements will only execute if the year is after the
    // current year
    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Congratulations on time travel!\n");
    }
    else
    {
        age = CURRENTYEAR - yearBorn;
        printf("\nSo this year you will turn %d on your birthday!\n",
               age);
        // The second if statment uses the modulus operator to test
        // if the year of
        // birth was a Leap Year. Again, only if it is will the code
        // execute
        if ((yearBorn % 4) == 0)
        {
            printf("\nYou were born in a Leap Year--cool!\n");
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /* This program asks the user their state of happiness on a scale of
   1 to 10 and then gives a custom 2-line message based on their range,
   either 1-2, 3-4, 5-7, or 8-10. */

    int prefer;
    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &prefer);
    // Once the user's level of happiness is entered, a series of if
    // statements
    // test the number against decreasing numbers. Only one of the
    // four will be
    // executed.
    if (prefer >= 8)
    {
        printf("Great for you!\n");
        printf("Things are going well for you!\n");
    }
    else if (prefer >= 5)
    {
        printf("Better than average, right?\n");
        printf("Maybe things will get even better soon!\n");
    }
    else if (prefer >= 3)
    {
        printf("Sorry you're feeling not so great.\n");
        printf("Hope things turn around soon...\n");
    }
    else
    {
        printf("Hang in there--things have to improve, right?\n");
        printf("Always darkest before the dawn.\n");
    }
    /////you can set as many if...else if...else if...else conditions as you’d like.
}
