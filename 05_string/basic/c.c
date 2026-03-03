
#include <stdio.h>
#include <string.h>

int main()
{
    //?
    // char str[] = {'a', 'k', 'k', '\0', 'a', 'l'};
    // printf("\nEnter your name: ");
    // scanf("%s ", &name);
    // gets(name);
    // puts(name);
    // printf("%s", name);
    char name[50];

    char str[] = "akkal";
    char str2[] = "akkal";
    char str3[5] = "akkal";

    printf("1. %s\n", str);
    printf("2. %s\n", str2);
    printf("3. %s\n", str3);
    printf("Length: %d\n", strlen(str3));

    printf("%s %s", "hello", "akkal");
    return 0;
}