#include <unistd.h>
#include <stdio.h>


void    ft_putchar(char c){
    write(1, &c, 1);
}

void ft_firstline(int x){
    ft_putchar('/'); /*first character*/
    while (x > 2)
    {
        ft_putchar('*');
        x--; // remove 1 from x
    }
    if (x > 1){
        ft_putchar('\\');  /*last character*/
    } 
    ft_putchar('\n'); 
}

void ft_body(int x)
    /*used for any lines between first and last line*/
{
    ft_putchar('*'); /* first character of each line in the body*/
    while (x > 2)
    {
        ft_putchar(' '); /* The space needed in the body*/
        x--;
    }
    if (x > 1){
        ft_putchar('*'); /* last character of each line of the body*/
    }
    ft_putchar('\n'); 
}
    /* \111/ */
void  ft_lastline(int x)
{
    ft_putchar('\\');
    while(x > 2)
    {
        ft_putchar('*');
        x--;
    } 
    if (x > 1)
    {
        ft_putchar('/');
    } 
    ft_putchar('\n');
      
}