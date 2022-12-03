/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:25:39 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/02 18:53:28 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include "libfp.h"

void  ft_putchar_fd(char c, int fd)
{
  write (fd, &c, 1);
}

void  ft_putstr_fd(char *s, int fd)
{
  while (s++)
    ft_putchar_fd( *s, fd);
}

void	ft_cspd_spec(va_list _valist, char spec)
{
	switch (&spec)
	{
		case 'c':
			ft_putchar_fd((char)va_arg( _valist, const char *), 1);
			break;
		case 's':
			ft_putstr_fd((char *)va_arg( _valist, const char *), 1);
			break;
		case 'p':

		case 'd':
	}
}

void	ft_iuxX_spec(va_list _valist, char spec)
{
	switch (&spec)
	{
		case 'i';
		case 'u';
		case 'x';
		case 'x';
	}
}

int ft_printf(const char *format,...)
{
	va_list _valist;
	char  *vastr;

	vastr = (char *)format;
	va_start( _valist, format);
	while (*vastr)
	{
		if (*vastr == '%')
		{
			if (*vastr + 1 == ('c' || 's' || 'p' || 'd'))
				ft_cspd_spec( _valist, vastr);
			else if (*vastr + 1 == ('i' || 'u' || 'x' || 'X'))
				ft_iuxX_spec( _valist, vastr);
			else if (*vastr + 1 == '%')
				ft_putchar_fd( '%', fd);
			vastr + 2;
		}
		ft_putchar_fd( *vastr, fd);
		vastr++;
	}
	return (0);
}

int main() 
{
	char  c;
	c = 'c';
	ft_printf("here is a char :%c",c);
	"cspdiuxX%"
	return 0;
}
