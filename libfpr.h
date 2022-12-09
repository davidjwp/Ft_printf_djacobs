/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfpr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:58:44 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/07 14:14:25 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFPR_H
# define LIBFPR_H

# include <stdarg.h>
# include "libft.h"

typedef struct switch_t
{
	int	type;
	int	upper;
	int	length;
	int sign_check;
}		type_def;

int	ft_prcspec( va_list _valist, char *fstr);
int	ft_prsspec( va_list _valist, char *fstr);
unsigned int	ft_prpspec( va_list _valist);
unsigned int	convert_to_hex_type(unsigned int value, type_def the_);

#endif
