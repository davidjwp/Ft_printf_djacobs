/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfpr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:58:44 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/04 15:16:05 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFPR_H
# define LIBFPR_H

# include <stdarg.h>
# include "libft.h"

# define FD 1 

int	ft_prcspec( va_list _valist, char *fstr);
int	ft_prsspec( va_list _valist, char *fstr);


#endif
