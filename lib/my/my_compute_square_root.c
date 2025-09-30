/*
** EPITECH PROJECT, 2025
** my_compute_square_root
** File description:
** return square root
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    if (nb == 0)
        return 0;
    if (nb == 1)
        return 1;
    while (i * i <= nb) {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}
