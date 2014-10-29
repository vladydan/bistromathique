/*
** bistro.c for bistro in /home/boulay_b/rendu/Piscine_C_eval_expr
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Tue Oct 28 14:42:38 2014 arnaud boulay
** Last update Wed Oct 29 19:18:45 2014 dimitri danilov
*/

#include "my.h"

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      my_put_nbr(eval_expr(av[1]));
      my_putchar('\n');
    }
  return (0);
}
