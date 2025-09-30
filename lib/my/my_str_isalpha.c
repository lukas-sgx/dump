/*
** EPITECH PROJECT, 2025
** my_str_isalpha
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')))
            return 0;
    }
    return 1;
}
