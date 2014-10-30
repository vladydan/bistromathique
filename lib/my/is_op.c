/*
** is_op.c for is_op in /home/boulay_b/work/bistromathique/lib/my
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct 30 11:24:35 2014 arnaud boulay
** Last update Thu Oct 30 11:25:33 2014 arnaud boulay
*/

int	is_op(char c)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    return (1);
  else
    return (0);
}
