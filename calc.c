#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    // printf("write down your equation: (+-/*)");

    // char *input;

    // scanf("%s", &input);

    // printf("this is your equation: \t %s", input);

    char *my_str = "Hello there!";
    printf("my_str: %s\n", my_str);
    printf("address of my_str(pointer to my_str): %p\n", &my_str);
    printf("first index of my_str(my_str[0]): %c\n", my_str[0]);

    return 0;
}