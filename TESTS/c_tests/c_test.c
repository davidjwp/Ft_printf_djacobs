# include <stdio.h>
# include "../../ft_printf.h"

int main(int argc, char **argv)
{
    if (argv[1][0] == '1')
        ft_printf("%c", '0');
    else if (argv[1][0] == '2')
        ft_printf(" %c", '0');
    else if (argv[1][0] == '3')
        ft_printf("%c ", '0' - 256);
    else if (argv[1][0] == '4')
        ft_printf(" %c ", '0' + 256);
    else if (argv[1][0] == '5')
        ft_printf(" %c %c %c", '0', '0', '1');
    else if (argv[1][0] == '6')
        ft_printf(" %c %c %c ", ' ', ' ', ' ');
    else if (argv[1][0] == '7')
        ft_printf(" %c %c %c ", '1', '2', '3');
    else if (argv[1][0] == '8')
        ft_printf(" %c %c %c ", '2', '1', 0);
    (void)argc;
    return (0);
}