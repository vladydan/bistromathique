/*
** tools.c for bistro in /home/boulay_b/work/bistromathique
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Tue Oct 28 17:50:13 2014 arnaud boulay
** Last update Tue Oct 28 18:02:37 2014 arnaud boulay
*/

#include "my.h"

int	is_nbr(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	is_op(char c)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    return (1);
  else
    return (0);
}
