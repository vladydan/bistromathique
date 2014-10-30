/*
** my_strlen.c for my_strlen in /home/danilo_d/rendu/Piscine_C_J04
** 
** Made by dimitri danilov
** Login   <danilo_d@epitech.net>
** 
** Started on  Thu Oct  2 16:03:17 2014 dimitri danilov
** Last update Fri Oct  3 21:26:54 2014 dimitri danilov
*/
int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      n++;
    }
  return (n);
}
