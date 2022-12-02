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

#include <stdarg.h>
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;

	char	* str;

	str = (char *)format;
	va_start(args, format);
	while (str)
	{
		str = (char *)va_arg(args, const char *);
		ft_putstr_fd(str, 1);
	}
	return (0);


}

int	main(int argc, char **argv)
{
	ft_printf ("hey");
	return (0);
}
