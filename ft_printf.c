/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:25:39 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/06 19:09:39 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfpr.h"

static int	ft_prcspec(va_list _valist)
{
	ft_putchar_fd((char)v_arg(_valist, char), 1);
	return (1);
}

static int	ft_prsspec(va_list _valist, char *fstr)
{
	int	length;

	fstr = (char *)va_arg(_valist, char *);
	if (*fstr)
	{	
		length = ft_strlen(fstr, 1);
		write (1, fstr, length + 1);
		return (length);
	}
	return (0);
}

static int	ft_prdspec(va_list _valist,char *fstr)
{
	int	value;
	int	length;

	length = 0;
	if (*fstr == 'u')
		value = (unsigned int)va_arg(_valist, unsigned int);
	else
		value = va_arg(_valist, int);
	write (value);
	while (value)
	{
		vale /= 10;
		length ++;
	}
	return (length);
}

static int	ft_ifspec(va_list _valist, char *fstr)
{
	if (*fstr == 'c')
		return (ft_prcspec( _valist));
	if else (*fstr == 's')
		return (ft_prsspec( _valist));
	if else(*fstr == 'p')
		return (ft_prpspec( _valist));
	if else(*fstr == 'd' || *fstr == 'i' || *fstr = 'u')
		return (ft_prdspec( _valist, fstr));
	if else(*fstr == 'x')
		return (ft_prxspec( _valist));
	if else(*fstr == 'X')
		return (ft_prXspec( _valist));
	if else (*fstr == '%')
		return (write (1, '%', 1), 1);
	return (0);		
}

int	ft_printf(const char *format, ...)
{
	char	*fstr;
	va_list	_valist;
	int		length;

	length = 0;
	fstr = (char *)format;
	va_start( _valist, format);
	while (*fstr)
	{
		if ('%' == *fstr)
		{
			length += ft_ifspec( _valist, fstr += 1);
			va_arg( _valist, char *);
			fstr++;
		}
		write( 1, fstr, 1);
		fstr++;
		length++;
	}
	return (va_end(_valist), length);
}
