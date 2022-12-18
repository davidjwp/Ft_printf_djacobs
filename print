# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int ft_is(char *format,...)
{
  va_list _valist;
  char  c;
  
  va_start(_valist, format);
  c = va_arg(_valist, int);
  return (write(1, &c,1), 1);
}

int main() 
{
  ft_is("hello",'c');
  return (0);
}