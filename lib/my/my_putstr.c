/*
** EPITECH PROJECT, 2025
** my_putstr
** File description:
** display char by char
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
