/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:12:42 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/04 15:15:45 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;

	str = "sundog";

	/*c specifier tests*/
        printf ("funny looking animal there ! %-s", str);
        printf ("funny looking animal there ! %s", str);
        ft_putchar_fd('\n',1);
        /*ft_printf ("funny looking animal there ! %c", str2);
	
	printf ("funny looking animal there ! %c", str1); 
	ft_putchar_fd('\n',1);        	
	ft_printf ("funny looking animal there ! %c", str2);
*/
	/*s specifier tests*/
	/*printf ("funny looking animal there ! %s", str1);
	ft_putchar_fd('\n',1);
	ft_printf ("funny looking animal there ! %s", str2);
	
	printf ("funny looking animal there ! %s", str1); 
   	ft_putchar_fd('\n',1);        	
	ft_printf ("funny looking animal there ! %s", str2);
	*/
	return (0);
}
