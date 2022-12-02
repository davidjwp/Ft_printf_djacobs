/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:04:45 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/02 18:37:30 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include "libft.h"
# include <stdio.h>

#define SPA " "

int	main(int argc, char **argv)
{
	printf ( ""SPA"hello" ""SPA"there" ""SPA"this" ""SPA"is" ""SPA"a" ""SPA"string" 
	""SPA"separated" ""SPA"by" ""SPA"nothing");
	putchar ('\n');
	return (0);
}
