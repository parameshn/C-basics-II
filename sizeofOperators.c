#include <stdio.h>
void main()
{
    int i;
    char j;
    i = sizeof(int);
    j = sizeof(char);
    printf("sizeof int = %d,sizeof char =%d", i, j);

    char name[] = "megalodan";
    int h = 7;
    printf("\nsizeof name = %d", sizeof(name));
    printf("\nsizeof i =%d", sizeof(h));
    /*The length of a string and the size of a string are two different values. The length is the
number of bytes up to but not including the null zero, and it is found via strlen().
The size of a string is the number of characters it takes to hold the string, including the
null zero.*/
}