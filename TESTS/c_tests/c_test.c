# include <stdio.h>

void main(int argc, char **argv)
{
    if (argv[0][1] == '1')
        ft_printf("%c", '');
    else if (argv[0][1] == '2')
        ft_printf(" %c", '');
    else if (argv[0][1] == '3')
        ft_printf("%c ", '');
    else if (argv[0][1] == '4')
        ft_printf(" %c ", '');
    else if (argv[0][1] == '5')
        ft_printf(" %c ", '-');
    else if (argv[0][1] == '6')
        ft_printf(" %c %c", '-' , 0);
    else if (argv[0][1] == '7')
        ft_printf(" %c %c %c", '-', 0, '');
    else if (argv[0][1] == '8')
        ft_printf(" %c %c %c", '-', 0, '0');
}