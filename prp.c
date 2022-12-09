/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prpspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:59:28 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/07 18:43:41 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libfpr.h"
# include <stdio.h>

static unsigned int	value_length(unsigned long long int value, int type)
{
	unsigned int	length;

	length = 0;
	if (!value || value == 1)
		return (1);
	~value;
	while (value / 10 )
	{
		value /= 10;
		length++;
	}
	return (length);
}

unsigned int	ft_prpspec(va_list _valist, type_def t_def)
{
	unsigned int	value;
	unsigned int	length;
	char			*address;

	t_def.sign_check = (unsigned long long int)va_arg( _valist, unsigned long long int);
	value = t_def.sign_check;
	if (t_def.sign_check < 0)
		length = value_length(value / 10, t_def.type);
	else
		length = value_length( value, t_def.type);
	address = (char *)ft_calloc( length , sizeof(char));
	if (!address)
		return (free(address), 0);
	t_def.length = length;
	if (t_def.type)
		ft_putstr_fd( "0x", 1);
	while (length)
	{
		address[--length] =  "0123456789abcdef"[value % 16];
		if ( t_def.upper && address[length] > 57)
			address[length] -= 32;
		if (value / 16)
			value /= 16;
	}
	write (1, address, t_def.length);
	return (free(address), t_def.length + (t_def.type + t_def.type));
}
