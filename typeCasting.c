/////////////TYPE CASTING
/*A C typecast temporarily changes the data type of one variable to
another.

(dataType)value
Put a data type in parentheses before a variable, expression, or data value you want
to typecast.
*/
main()
{
    int age;
    /*The dataType can be any C data type, such as int or float. The value is any variable, literal,
or expression. Suppose that age is an integer variable that holds 6. The following converts age to a
float value of 6.0*/

    (float)age; // since the result of the typecast is not being assigned to any variable or used in any way, the expression itself does not have any effect on the program.

    /*If you were using age in an expression with other floats, you should typecast age to float to maintain consistency in the expression.
     */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////. It's important to note that typecasting does not modify the original variable; it only provides a way to interpret the value in a different data type.
    /////////////////////////////////////////////////////////////////////////////////////////////////

    float salaryBonus, salary, value;
    int number, yrsService;

    salaryBonus = salary * (float)age / 150.0;
    /*age does not change to a floating-point variable—age is changed only temporarily for this one
calculation. Everywhere in the program that age is not explicitly typecast, it is still an int variable.*/

    ////////////////////////////If you find yourself typecasting the same variable to a different data type throughout a program, you might have made the variable the wrong type to begin with.

    value = (float)(number - 10 * yrsService);
    /*The parentheses around the expression keep the typecast from casting only the variable number. C does perform some automatic typecasting. If value is defined as a float, C typecasts the
preceding expression for you before storing the result in value.*/
}