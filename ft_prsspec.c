/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:33:37 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/04 14:56:08 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_prsspec(va_list _valist)
{
	int	length;
	char *fstr;

	fstr = (char *)va_arg( _valist, char *);
	if (*fstr)
	{
		length = ft_strlen( fstr);
		write (1, fstr, length + 1);
		return (length);
	}
	return (0);
}
