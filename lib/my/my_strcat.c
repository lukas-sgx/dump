/*
** EPITECH PROJECT, 2025
** my_strcat
** File description:
** display strcat
*/

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strcat(char *dest, char const *src)
{
    int i;
    int j;
    char temp[my_strlen(dest) + my_strlen(src)];
    char temp2[my_strlen(src)];

    my_strcpy(temp, dest);
    for (j = 0; src[j] != '\0'; j++) {
        temp[my_strlen(dest) + j] = src[j];
    }
    temp[my_strlen(dest) + j] = '\0';
    my_strcpy(dest, temp);
    return dest;
}
