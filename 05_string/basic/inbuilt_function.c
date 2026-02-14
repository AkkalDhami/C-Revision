#include <stdio.h>
#include <string.h>

int main()
{
    //? String predefined function.

    char str1[50], str2[50];
    printf("Enter a first string: ");
    scanf("%s", str1);
    printf("Enter a 2nd string: ");
    scanf("%s", str2);

    //?? 1. strlen -> return length of a string
    printf("\n1. Length of string '%s': %d", str1, strlen(str1));

    //? 2. strcpy
    char newStr[50];
    strcpy(newStr, str2);
    printf("\n2. Copying string '%s': %s", str2, newStr);

    //? 3. strcat
    printf("\n3. Concatenate string '%s' & '%s': %s", str1, str2, strcat(str1, str2));

    //? 4. strcmp
    //? return 0 if strings matched.
    //? (> 0) if 2nd length of 2nd str > len of 1st str
    int result = strcmp(str1, str2);
    printf("\n4. Comparing string '%s' & '%s': %s", str1, str2, result);

    //? 5. strlwr
    printf("\n5. Lowercase of string '%s': %s", str1, strlwr(str1));

    //? 6. strupr
    printf("\n6. Uppercase of string '%s': %s", str2, strupr(str2));

    //? 7. strupr
    printf("\n7. Reverse of string '%s': %s", str2, strrev(str2));
    return 0;
}