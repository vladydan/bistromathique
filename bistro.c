/*
** bistro.c for bistro in /home/boulay_b/rendu/Piscine_C_eval_expr
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Tue Oct 28 14:42:38 2014 arnaud boulay
** Last update Tue Oct 28 14:59:28 2014 arnaud boulay
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
