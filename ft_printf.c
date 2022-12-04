/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:25:39 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/04 18:37:12 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpr.h"

int	ft_switch_spec(va_list _valist, char *fstr)
{
	switch (*fstr)
	{
		case 'c':
			return (ft_prcspec( _valist, fstr));
		case 's':
			return (ft_prsspec( _valist, fstr));
		case 'p':
			return (ft_prpspec( _valist, fstr));
		case 'd';
			//return (ft_prdspec( _valist, fstr));
		case 'i':
			//return (ft_prispec( _valist, fstr));
		case 'u':
			
		case 'x':
			
		case 'X':
		case '%':
			ft_putchar_fd( '%', 1);
			return (1);		
	}
	return (0);	
}

int	ft_printf(const char *format, ...)
{
	char	*fstr;
	va_list	_valist;
	int	length;

	length = 0;
	fstr = (char *)format;
	va_start( _valist, format);
	if (!format)
		return (length);
	while (*fstr)
	{
		if ('%' == *fstr)
		{
			length += ft_switch_spec( _valist, fst += 1);
			va_arg( _valist, char *);
			fstr++;
		}
		ft_putchar_fd( *fstr, 1);
		fstr++;
		length++;
	}
	va_end(_valist);
	return (length);
}

int	main(int argc, char **argv)
{
	ft_printf ("here is a number : %i");
	return (0);
}      
