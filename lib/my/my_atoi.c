/*
** my_atoi.c for my_atoi in /home/boulay_b/work/bistromathique/lib/my
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct 30 11:26:13 2014 arnaud boulay
** Last update Thu Oct 30 11:26:41 2014 arnaud boulay
*/

int	my_atoi(char *str)
{
  int	i;
  int	nbr;
  
  i = 0;
  nbr = 0;
  while (is_nbr(str[i]) == 1)
    {
      nbr = (nbr * 10) + str[i] - '0';
      i = i + 1;
    }
  return (nbr);
}
