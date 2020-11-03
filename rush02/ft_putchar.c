#include <unistd.h>
 
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_firstline(int x)
{ 
    ft_putchar('A');
    while (x > 2)
    {
        ft_putchar('B');
        x--;
    }
    if (x > 1){
        ft_putchar('A'); 
    }

    ft_putchar('\n');
}

void ft_body(int x)
{
    ft_putchar('B');
    while (x > 2)
    {
        ft_putchar(' ');
        x--;
    }
    if (x > 1)
        ft_putchar('B');
    ft_putchar('\n'); 
}