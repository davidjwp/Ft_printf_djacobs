/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:14:36 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/07 14:50:35 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "libfpr.h"
# include <limits.h>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define DEF "\033[0m"

unsigned int	ft_arg(const char *format,...)
{
	va_list _valist;
	type_def	t_def;
	unsigned int	length;

	t_def.type = 0;				//change type to address
	t_def.upper = 0;			//change lower to upper
	va_start( _valist, format);
	length = ft_prxspec( _valist);
	va_end ( _valist);
	return (length);
}

void	_TEST_1(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 1:::\t\t//value 18975347//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}

void	_TEST_2(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 2:::\t\t//value at 1//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}
								
void	_TEST_3(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 3:::\t\t//value at 12//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}
								
void	_TEST_4(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 4:::\t\t//value at 1234567//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}
								
void	_TEST_5(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 5:::\t\t//value at 0//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}
								
void	_TEST_6(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 6:::\t\t//value at -0//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}
								
void	_TEST_7(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 7:::\t\t//value at -1//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}
								
void	_TEST_8(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 8:::\t\t//value at -123//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}

void	_TEST_9(int value)
{
	unsigned int	length;
	unsigned int	mylength;
	printf (":::::::::::::::::::::::::::::::::::::::\n");
	printf ("TEST 9:::\t\t//pure value 123//\n");
	mylength = ft_arg("hello", value);
	printf ("\t\tmy value\n");
	length = printf ("%x", value);
	printf ("\t\tprintf value\n%u\t\t\tmy length\n%u\t\t\tprintf length\n",mylength, length);
	if (mylength == length)
		printf ("\n%sOK%s\n", GREEN, DEF);
	else
		printf ("\n%sKO%s\n", RED, DEF);
}

int	main(int argc, char **argv)
{
	int value;

	value = 18975347;
	_TEST_1(value);
	value = 1;
	_TEST_2(value);
	value = 12;
	_TEST_3(value);
	value = 1234567;
	_TEST_4(value);
	value = 0;
	_TEST_5(value);
	value = -0;
	_TEST_6(value);
	value = -1;
	_TEST_7(value);
	value = -123;
	_TEST_8(value);
	_TEST_9(123);

	return (0);
}
