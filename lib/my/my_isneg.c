/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** display n if neg or p if pos
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar(80);
    } else {
        my_putchar(78);
    }
    return 0;
}
