/*
** eval_expr.c for eval_expr in /home/boulay_b/rendu/Piscine_C_eval_expr
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Sun Oct 26 13:18:53 2014 arnaud boulay
** Last update Thu Oct 30 20:13:03 2014 dimitri danilov
*/

#include "my.h"

char	*expr(char *str, int *i, char *tmp)
{
  while (is_nbr(str[*i]) == 0 && str[*i] != '(')
    *i = *i + 1;
  if (str[*i] == '(')
    {
      *i = *i + 1;
          /* tmp = add(str, i, tmp);remplacer par fonction addition */
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
  /* tmp = my_get_nbr(&str[*i]); get str dessus */
  while (is_nbr(str[*i]) == 1)
    *i = *i + 1;
  while (str[*i] == ' ')
    *i = *i + 1;
  return (tmp);
}

char	*mul(char *str, int *i, char *tmp)
{
  tmp = expr(str, i, tmp);
  while (str[*i] == '*' || str[*i] == '/' || str[*i] == '%')
    {
      if (str[*i] == '*')
	{
	  *i = *i + 1;
	  /* tmp = tmp * expr(str, i, tmp); */
	}
      else if (str[*i] == '/')
	{
	  *i = *i + 1;
	  /* tmp = tmp / expr(str, i, tmp); */
	}
      else if (str[*i] == '%')
	{
	  *i = *i + 1;
	  /* tmp = tmp % expr(str, i, tmp); */
	}
    }
  return (tmp);
}

char 	*add(char *str, int *i, char *tmp)
{
  tmp = mul(str, i, tmp);
  while (str[*i] == '+'|| str[*i] == '-')
    {
      if (str[*i] == '+')
	{
	  *i = *i + 1;
	  /* tmp = tmp + mul(str, i, tmp); */
	}
      else if (str[*i] == '-')
	{
	  *i = *i + 1;
	  while (str[*i] == ' ')
	    *i = *i + 1;
	  /* tmp = tmp - mul(str, i, tmp); */
	}
    }
  return (tmp);
}

char	*eval_expr(char *base, char *ops, char *expr, unsigned int size)
{
  char	*rslt;
  int	i;
  char	*tmp;

  i = 0;
  tmp = 0;
  rslt = add(expr, &i, tmp);
  return (rslt);
}
