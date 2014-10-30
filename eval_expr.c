/*
** eval_expr.c for eval_expr in /home/boulay_b/rendu/Piscine_C_eval_expr
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Sun Oct 26 13:18:53 2014 arnaud boulay
** Last update Thu Oct 30 10:55:15 2014 dimitri danilov
*/

#include "my.h"

char	*expr(char *str, int *i, int tmp)
{
  while (is_nbr(str[*i]) == 0 && str[*i] != '(')
    *i = *i + 1;
  if (str[*i] == '(')
    {
      *i = *i + 1;
      tmp = add(str, i, tmp);
    }
  if (str[*i] == ')')
    {
      *i = *i + 1;
      while (str[*i] == ' ')
	*i = *i + 1;
      return (tmp);
    }
  while (str[*i] == ' ')
    *i = *i + 1;
  tmp = my_get_nbr(&str[*i]);
  while (is_nbr(str[*i]) == 1)
    *i = *i + 1;
  while (str[*i] == ' ')
    *i = *i + 1;
  return (tmp);
}

char	*mul(char *str, int *i, int tmp)
{
  tmp = expr(str, i, tmp);
  while (str[*i] == '*' || str[*i] == '/' || str[*i] == '%')
    {
      if (str[*i] == '*')
	{
	  *i = *i + 1;
	  tmp = tmp * expr(str, i, tmp);
	}
      else if (str[*i] == '/')
	{
	  *i = *i + 1;
	  tmp = tmp / expr(str, i, tmp);
	}
      else if (str[*i] == '%')
	{
	  *i = *i + 1;
	  tmp = tmp % expr(str, i, tmp);
	}
    }
  return (tmp);
}

char 	*add(char *str, int *i, int tmp)
{
  tmp = mul(str, i, tmp);
  while (str[*i] == '+'|| str[*i] == '-')
    {
      if (str[*i] == '+')
	{
	  *i = *i + 1;
	  tmp = tmp + mul(str, i, tmp);
	}
      else if (str[*i] == '-')
	{
	  *i = *i + 1;
	  while (str[*i] == ' ')
	    *i = *i + 1;
	  tmp = tmp - mul(str, i, tmp);
	}
    }
  return (tmp);
}

char	*eval_expr(char *base, char *operateur, char *expr, int size)
{
  char	*final;
  int	i;
  int	tmp;

  i = 0;
  tmp = 0;
  final = add(expr, &i, tmp);
  return (final);
}
