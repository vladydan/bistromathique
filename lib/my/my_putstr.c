/*
** my_putstr.c for my_putstr in /home/boulay_b/work
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct  2 15:14:29 2014 arnaud boulay
** Last update Thu Oct 30 11:27:11 2014 arnaud boulay
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
