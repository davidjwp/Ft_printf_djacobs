/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prpspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:59:28 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/04 18:32:05 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libfpr.h"

//this function doesn't count the length properly, simple values always misses one
static unsigned int	value_length(unsigned int value)
{
	unsigned int	length;

	length = 0;
	while (value /= 10 )
		length++;
	return (length);
}

unsigned int	ft_prpspec(va_list _valist, char *fstr)
{
	unsigned int	value;
	unsigned int	length;
	char		*address;

	value = (unsigned int)va_arg( _valist, unsigned int);
	length = value_length( value);
	address = (char *)ft_calloc( length + 1, sizeof(char));
	while (length)
	{
		address[--length] =  "0123456789abcdef"[value % 16];
		if (value / 16)
			value /= 16;
	}
	ft_pustr_fd( "0x", 1);
	ft_pustr_fd( address, 1);
	length = ft_strlen(address) + 2;
	free(address);
	return (length);
}
