#include <unistd.h>
#include <stdio.h>


void rush01(int x, int y)
{
    if ((x <= 0) || (y <= 0))
    {
        return ;
    }
    ft_firstline(x);
        
    while (y > 2)
    {
        ft_body(x);
        y--;
    }
    if (y > 1)
    {
        ft_lastline(x);
    }
        
}


