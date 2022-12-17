# include "ft_printf.h"
# include <stdio.h>

int main(void)
{
    int length;

    length = ft_printf(" %s ", "-");
    //printf ("%d", length);
    write (1, "\n",1);
    length = printf (" %s ", "-");
    //printf ("%d", length);

    (void)length;
    return (0);
}