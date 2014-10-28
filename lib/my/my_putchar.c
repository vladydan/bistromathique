/*
** my_putchar.c for my_putchar in /home/boulay_b/work/lib
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Mon Oct 20 10:28:47 2014 arnaud boulay
** Last update Mon Oct 20 10:29:36 2014 arnaud boulay
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
