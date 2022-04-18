#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* removeSpaces(char*);

int main()
{
    int decimal = 0;
    char * hexa;

    /*test call to show whitespace removed when string inputted into removeSpaces */
    char str[] = "9ff9 f999f  9f99f9f  9f9f 298723492387";
    hexa = removeSpaces(str);

    /* test code shoes str now has hex value */
    printf("%s", str);

    return 0;
}


/*function removes spaces from strings, counts nibbles
and returns an int */
char* removeSpaces(char *str){

    int num = 0;
    int count = 0;

    /* iterate through string. If not space count++ */
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; /*count increments */
    str[count] = '\0';

    num = strlen(str);
    num = num/2; /* to get # of nibbles */

    char hex[3];
    sprintf(str, "%x", num);

    return hex;

}


