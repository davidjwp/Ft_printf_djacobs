# include <stdio.h>

void main(void)
{
    FILE *ptest8;

    ptest8 = fopen ("ptest8", "wra");
    
    fprintf(ptest8 ," %c %c %c ", '2', '1', 0);
}