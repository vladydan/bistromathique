/*
** my_get_str.c for my_get_str in /home/danilo_d/rendu/bistromathique/srcs
** 
** Made by dimitri danilov
** Login   <danilo_d@epitech.net>
** 
** Started on  Fri Oct 31 11:29:37 2014 dimitri danilov
** Last update Fri Oct 31 15:42:05 2014 dimitri danilov
*/
#include <stdlib.h>
int	my_strlen2(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
int	negative(char *str)
{
  int	i;
  int	nb_moins;

  i = 0;
  nb_moins = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	nb_moins++;
      i++;
    }
  if (nb_moins % 2 != 0)
    return (1);
  else 
    return (0);
}
int	is_base(char c, char *base)
{
  int	i;

  i = 0;
  while (base[i] != '\0')
    { 
      if (c == base[i])
	{
	  return (1);
	}
      if (c == '-' || c == '+')
	return (2);
      i++;
    }
  return (0);
}

char	*my_get_str(char *str, char *base)
{
  int	i;
  char	*str2;
  int	j;
  
  j = 1;
  i = 0;
  str2 = malloc(my_strlen2(str));
  while (is_base(str[i], base) == 2)
    i++;
  while (is_base(str[i], base) == 1)
    {
      str2[j] = str[i];
      i++;
      j++;
    }
  str2[i + 1] = '\0';
  if (negative(str) == 1)
    str2[0] = '-';
  else
    str2[0] = '+';
  return (str2);
}
