/*
** EPITECH PROJECT, 2025
** my_strstr
** File description:
** return found str
*/

char *my_strstr(char *str, const char *to_find)
{
    int i, j;

    if (*to_find == '\0')
        return str;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; to_find[j] != '\0' && str[i + j] == to_find[j]; j++);
        if (to_find[j] == '\0')
            return &str[i];
    }
    return 0;
}
