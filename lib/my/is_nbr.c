/*
** is_nbr.c for is_nbr in /home/boulay_b/work/bistromathique/lib/my
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct 30 11:24:22 2014 arnaud boulay
** Last update Thu Oct 30 11:25:14 2014 arnaud boulay
*/

int	is_nbr(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
