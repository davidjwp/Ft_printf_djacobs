/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:00:00 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/09 13:00:03 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
# include <stdio.h>
# include <limits.h>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define DEF "\033[0m"
# define FILE_NAME ft_out
void    _TEST1(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}

void    _TEST2(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST3(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST4(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST5(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST6(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST7(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST8(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
void    _TEST9(char c)
{
    unsigned int ftlen, prlen;

    ftlen = ft_printf ("[ %c,", c);
    prlen = printf ("%c | ", c);
    if (ftlen == prlen)
        printf ("%s%u,%u ] %s", GREEN, ftlen, prlen, DEF);
    else
        printf ("%s%u,%u ] %s", RED, ftlen, prlen, DEF);
}
int	main(void)
{

    char c;
	
    printf ("\t\t\t\".-``';._CHAR_TESTS_.;'``-.\n");
    c = 'a';
    _TEST1(c);
    c = 'b';
    _TEST2(c);
    c = '0';
    _TEST3(c);
    c = '1';
    _TEST4(c);
    c = '\0';
    _TEST5(c);
    c = '\257';
    _TEST6(c);
    c = '\57';
    _TEST7(c);
    _TEST8(SCHAR_MIN);
    _TEST9(SCHAR_MAX);
	return (0);
}