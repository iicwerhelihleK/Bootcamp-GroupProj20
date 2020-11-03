#include <stdio.h> 

void rush00(int x, int y){
    int s;
    int sh;
    s = x - 2;
    sh = y - 2;

    ft_write_line('o', '-', 'o');
    while(sh > 0){
        ft_write_line('|', ' ', s);
        sh--;
    }
    ft_write_line('o', '-', s);
}





   

