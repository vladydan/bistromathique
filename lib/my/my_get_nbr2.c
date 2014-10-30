/*
** my_getnbr.c for my_getnbr in /home/boulay_b/work/lib
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Mon Oct 20 10:39:40 2014 arnaud boulay
** Last update Wed Oct 29 19:39:31 2014 dimitri danilov
*/

int	my_get_nbr2(char *str)
{
  int	i;
  int	nbr;
  int	isneg;

  i = 0;
  nbr = 0;
  isneg = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  if (str[i - 1] == '-')
	    isneg = 1;
	  if (str[i + 1] < '0' || str[i + 1] > '9')
	    {
	      nbr = nbr + (str[i] - 48);
	      nbr = (isneg == 1) ? -nbr : nbr;
	      return (nbr);
	    }
	  else
	    nbr = (nbr * 10) + ((str[i] - 48) * 10);
	}
      i = i + 1;
    }
  return (0);
}
