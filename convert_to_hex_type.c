/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_hex_type.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:35:11 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/07 19:06:30 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stdlpr.h"

static int	value_length(unsigned int value)
{
	int	length;

	length = 0;
	if (!value || value == 1)
		return (1);
	while (value / 10)
	{
		value /= 10;
		length++;
	}
	return (length);
}

unsigned int	convert_to_hex_type(unsigned int value, type_def the_)
{
	unsigned int	length;
	char			*hex_arr;
	
	if (the_.sign_check < 0)
		length = value_length( value / 10, the_.type);
	else
		length = value_length( value, the_.type);
	hex_arr = (char *)ft_calloc( length, sizeof(char));
	if (!hex_arr)
		return (free(hex_arr), 0);
	the_.length = length;
	if (the_.type)
		write (1, "0x", 3);
	while (length)
	{
		hex_arr[--length] = "0123456789abcdef"[value % 16];
		if (the_.upper && hex_arr[length] > 57)
			hex_arr[length] -= 32;
		if (value / 16)
			value /= 16;
	}
	write(1, hex_arr, the_.length);
	return (free(hex_arr), (the_.length + (the_.type + the_.type)));
}
