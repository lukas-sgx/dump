/*
** EPITECH PROJECT, 2025
** my_strlowcase
** File description:
** up to lower
*/

int is_alpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        new_word = !is_alpha(str[i]);
        i++;
    }
    return str;
}
