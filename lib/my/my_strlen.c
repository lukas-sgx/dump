/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** count nb char in char
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}
