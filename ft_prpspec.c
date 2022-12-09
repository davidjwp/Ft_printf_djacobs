/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prpspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:02:40 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/08 13:02:46 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

unsigned int    ft_prpspec(va_list _valist)
{
    t_def the_;

    the_.sign_check = (int)va_arg( _valist, int);
    the_.type = 1;
    the_.length = convert_to_hex_type( the_.sign_check, the_);
    return (the_.length);
}