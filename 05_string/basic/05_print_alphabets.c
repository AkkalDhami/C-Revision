#include <stdio.h>

void printAlphabet()
{
    //? a:97, z:122
    printf("Uppercase alphabets:\n");
    for (int i = 65; i <= 90; i++)
    {
        printf("%c, ", (char)i);
    }
    //? A:65, Z:90
    printf("\nLowercase alphabets:\n");
    for (int i = 97; i <= 122; i++)
    {
        printf("%c, ", (char)i);
    }
}

int main()
{

    printAlphabet();

    return 0;
}