/*
** EPITECH PROJECT, 2025
** my_revstr
** File description:
** rev str
*/

int my_strlenbis(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlenbis(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
