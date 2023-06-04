////LOGICAL OPERATORS  LEFT TO RIGHT
/*A relational operator simply tests how two values relate (how they compare to each
other). The logical operators combine relational operators.*/

/*
&& AND OPERATOR   both side must be true
|| OR OPERATOR    either one of the side should be true
!  NOT OPERATOR    reverses a true or a false condition.


if ((age >= 21) && (age <= 65)) {
if ((hrsWorked > 40) || (sales > 25000.00)) {
if (!(isCharterMember)) {

If you combine two relational operators with a logical operator or you use the ! (not) operator to
negate a relation, the entire expression following the if statement requires parentheses.

if !isCharterMember { /* Not allowed


if ((age >= 21) && (age <= 65)) {
This could be worded in spoken language like this:
“If the age is at least 21 and no more than 65,...”

if ((hrsWorked > 40) || (sales > 25000.00)) {
could be worded in spoken language like this:
“If the hours worked are more than 40 or the sales are more than $25000,... “
Similarly,


if (!(isCharterMember)) {
    could be worded in spoken language like this:
“If you aren’t a charter member, you must...”


*/

#include <stdio.h>

void main()
{
    int age;

    printf("enter your age\n");
    scanf(" %d", &age);

    if (age > 18)
    {
        printf("your are eligible to vote cause you'r %d!", age);
    }
    else
    {
        printf("your are not eligible to vote cause you'r not %d!", age);
    }

    if (age > 16)
    {
        printf("your are eligible to drive cause you'r %d!", age);
    }
    else
    {
        printf("your are not eligible to drive cause you'r not %d!", age);
    }

    // set up some common integers for the program
    int planets = 8;
    int friends = 6;
    int potterBooks = 7;
    int starWars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;
    // This first logical statement uses the AND operator to test
    // whether the cast of Friends and the Beatles would have
    // enough people to make a baseball team AND the cast
    // of Friends and the Avengers would have enough people
    // to field a football team. If so, the statements will print.
    if ((friends + beatles >= baseball) &&
        (friends + avengers >= football))
    {
        printf("The cast of Friends and the Beatles ");
        printf("could make a baseball team,\n");
        printf("AND the cast of Friends plus the Avengers ");
        printf("could make a football team.\n");
    }
    else
    {
        printf("Either the Friends cannot make a ");
        printf("baseball team with the Fab Four, \n");
        printf("OR they can't make a Gridiron Gang with the ");
        printf("Avengers (or both!)\n");
    }
    // This second logical statement uses the OR operator to test
    // whether the number of Star Wars movies is less than months
    // in the year OR the number of Harry Potter books is less than
    // months in the year. If either statement is true,
    // the statements will print.
    if ((starWars <= months) || (potterBooks <= months))
    {
        printf("\nYou could read one Harry Potter book a month,\n");
        printf("and finish them all in less than a year,\n");
        printf("OR you could see one Star Wars movie a month,\n");
        printf("and finish them all in less than a year.\n");
    }
    else
    {
        printf("Neither can happen--too many books or movies,\n");
        printf("Not enough time!\n\n");
    }
    // This final logical statemnt uses the NOT operator to test
    // whether the number of baseball players on a team added
    // to the number of basketball players on a team is NOT
    // greater than the number of football players on
    // a team. If so, the statements will print.
    if (!(baseball + basketball > football))
    {
        printf("\nThere are fewer baseball and basketball players\n");
        printf("combined than football players.");
    }
    else
    {
        printf("\nThere are more baseball and basketball players\n");
        printf("combined than football players.");
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////
    int count;
    count = 0;
    if (count == 0)
    {
        // Because the if is true only if count has a value of 0, you can rewrite the statement like this:
    }

    if (!count)
    { /* Executes if's body only if count is 0 */
    }

    /*The logical NOT operator negates the value of count. So, if count is 0, the logical NOT of 0 is true. If count is any non-zero value, the logical NOT of that value is false. Therefore, if !count evaluates to true, indicating that count is 0, the body of the if statement will be executed.*/
}
