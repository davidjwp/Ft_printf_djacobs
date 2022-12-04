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

# include "libfpr.h"

int	ft_prsspec(va_list _valist, char *fstr)
{
	int	length;

	fstr = (char *)va_arg( _valist, char *);
	if (*fstr)
	{	
		ft_pustr_fd( fstr, 1);
		length = ft_strlen( fstr, 1);
		return (length);
	}
	return (0);
}
