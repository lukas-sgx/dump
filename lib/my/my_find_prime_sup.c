/*
** EPITECH PROJECT, 2025
** my_is_prime
** File description:
** prime+1;
*/

int my_is_prime2(int nb)
{
    int i;

    for (i = 2; i < nb; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    int i = nb;

    for (; my_is_prime2(i) < 1; i++);
    return i;
}
