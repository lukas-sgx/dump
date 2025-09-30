/*
** EPITECH PROJECT, 2025
** my_is_prime
** File description:
** return prime;
*/

int my_is_prime(int nb)
{
    int i;

    for (i = 2; i < nb; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}
