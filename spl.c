#include <stdio.h>
int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits, others;

    alphabets = digits = others = 0
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
  s++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
