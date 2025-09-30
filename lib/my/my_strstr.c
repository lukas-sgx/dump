/*
** EPITECH PROJECT, 2025
** my_strstr
** File description:
** return found str
*/

char *verif_str(char *bis, char const *to_find, int j)
{
    int a = 0;

    while (bis[j] != '\0' && to_find[a] != '\0') {
        if (to_find[a] == bis[j]) {
            j++;
            a++;
        } else {
            return 0;
        }
    }
    if (to_find[a] == '\0')
        return &bis[j - a];
    return 0;
}

char *checkreturn(char *str, char const *to_find, int j)
{
    char *res;

    res = verif_str(str, to_find, j);
    if (res != 0)
        return res;
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    int i;

    if (*to_find == '\0')
        return str;
    for (i = 0; str[i] != '\0'; i++) {
        if (to_find[0] == str[i]) {
            return checkreturn(str, to_find, i);
        }
    }
    return 0;
}
