/*
** main.c for bistromathique 
** 
** Made by Charlie Root
** Login   <rn@epita.fr>
** 
** Started on  Tue Oct 23 11:45:05 2001 Charlie Root
** Last update Fri Oct 31 19:40:10 2014 dimitri danilov
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromathique.h"
#include "my.h"

int		my_atoi(char *);
static void	check_base(char *base);
static void	check_ops(char *ops);
static char	*get_expr(unsigned size);

int		main(int ac, char **av)
{
  char		*expr;
  unsigned int	size;
  char		*final;
  if (ac != 4)
    {
      my_putstr("Usage : ");
      my_putstr(av[0]);
      my_putstr(" base ops\"()+-*/%\" exp_len\n");
      exit(1);
    }
  check_base(av[1]);
  check_ops(av[2]);
  size = my_atoi(av[3]);
  expr = get_expr(size);
  final = eval_expr(av[1], av[2], expr, size);
  my_putstr(&final[1]);
  my_putchar('\n');
  return (0);
}

static void	check_base(char *b)
{
 if (my_strlen(b) < 2)
    {
      my_putstr("Bad base\n");
      exit(1);
    }
}

static char	*get_expr(unsigned int size)
{
  char	*expr;
  
  if (size <= 0)
    {
      my_putstr("Bad expr len\n");
      exit(2);
    }
  expr = malloc(size + 1);
  if (expr == 0)
    {
      my_putstr("could not alloc\n");
      exit(3);
    }
  if (read(0, expr, size) != size)
    {
      my_putstr("could not read\n");
      exit(4);
    }
  expr[size] = 0;
  return (expr);
}

static void	check_ops(char *ops)
{
  if (my_strlen(ops) != 7)
    {
      my_putstr("Bad ops\n");
      exit(5);
    }
}
