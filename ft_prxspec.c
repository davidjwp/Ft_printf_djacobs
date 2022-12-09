/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prxspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:28:16 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/08 13:28:20 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libfpr.h"

unsigned int    ft_prxspec(va_list _valist)
{
    type_def the_;

    the_.sign_check = (int)va_arg( _valist, int);
    the_.length = convert_to_hex_type( the_.sign_check, the_.type);
    return (the_.length);
}