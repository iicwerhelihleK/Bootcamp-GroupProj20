#include <stdio.h> 


void ft_putchar(char c){
    write(1, &c, 1);
}


void ft_write_line(char end, char mid, int space){
    ft_putchar(end);
    while(space > 0){
        ft_putchar(mid);
        space--;
    }
    ft_putchar(end);
    ft_putchar('\n');
}

​
