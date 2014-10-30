/*
** my_strlen.c for my_strlen in /home/boulay_b/work
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct  2 16:15:08 2014 arnaud boulay
** Last update Thu Oct 30 11:27:48 2014 arnaud boulay
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
