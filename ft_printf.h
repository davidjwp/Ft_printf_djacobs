/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:51:11 by djacobs           #+#    #+#             */
/*   Updated: 2022/11/30 19:06:57 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINT_H
# define LIBPRINT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

typedef struct switch_t
{
	unsigned int	type;
	unsigned int	upper;
	unsigned int	length;
	int 			sign_check;
}				t_def;
//my functions
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

//ft_printf functions
int				ft_printf (const char *format,...);
int				ft_prsspec( va_list _valist);
unsigned int	ft_prpspec( va_list _valist);
unsigned int	ft_prdspec(long int value);
unsigned int	ft_prxmin( va_list _valist);
unsigned int	ft_prxupper( va_list _valist);
unsigned int	convert_to_hex_type(unsigned int value, t_def the_);

#endif
