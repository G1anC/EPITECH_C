/*
** EPITECH PROJECT, 2022
** cmp
** File description:
** description
*/

#include "../INCLUDE/my.h"

int cmp(char *s1, char *s2)
{
    int diff = 0;

    for (int i = 0; s1[i] && s2[i]; diff += (s1[i] != s2[i++]));
    return diff;
}

int cmp(char *s1, char *s2)
{
    for (int i = 0; s1[i] && s2[i] && (s1[i] == s2[i]); i++);
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
