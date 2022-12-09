/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prdspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:22:40 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/09 12:22:42 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

static unsigned int value_length(long int value)
{
    int length;

    length = 0;
    if (value < 0)
        length++;
    while (value)
    {
        value /= 10;
        length++;
    }
    return (length);
}

unsigned int    ft_prdspec(long int  value)
{
    unsigned int         length;
    char        *valstr;
    t_def       the_;

    length = value_length( value);
    valstr = (char *)ft_calloc(length + 1,sizeof(char));
    if (!valstr)
        return (free(valstr), 0);
    the_.length = length;
    if (value < 0)
        valstr[0] = '-';
    while (value)
    {
        valstr[--length] = "0123456789"[value % 10];
        value /= 10;
    }
    write ( 1, valstr, the_.length + 1);
    return ( free(valstr), the_.length);
}