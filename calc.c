#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    char *input = malloc(100 * sizeof(char));
    // char **p_input = &input;
    printf("write down your equation: (+-/*)\n");

    scanf("%[^\n]s", input);
    // printf("this is your equation: \t %s", input);

    for (int i = 0; i < strlen(input); i++)
    {
    }

    free(input);
    // char *my_str = "Hello there!";
    // printf("my_str: %s\n", my_str);
    // printf("address of my_str(pointer to my_str): %p\n", &my_str);
    // printf("first index of my_str(my_str[0]): %c\n", my_str[0]);
    // char **pointer_to_my_str = &my_str;
    // printf("value of p: %s\n", *pointer_to_my_str);
    // printf("p: %p\n", pointer_to_my_str);

    return 0;
}