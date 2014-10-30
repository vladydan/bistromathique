/*
** my_getnbr_base.c for my_getnbr_base in /home/boulay_b/work/mylib/lib/my
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Mon Oct 27 18:54:13 2014 arnaud boulay
** Last update Thu Oct 30 13:48:34 2014 arnaud boulay
*/

int	base_pos(char *base, char c)
{
  int	i;

  i = 0;
  while (base[i] != '\0' && base[i] != c)
    i = i + 1;
  return (i);
}

int	my_get_nbr_base(char *str, char *base)
{
  int	i;
  int	rslt;
  int	base_len;

  i = 0;
  rslt = 0;
  base_len = base_pos(base, '\0');
  while (str[i] != '\0')
    {
      rslt = rslt * base_len;
      rslt = rslt + base_pos(base, str[i]);
      i = i + 1;
    }
  if (str[0] == '-')
    return (rslt * -1);
  else
    return (rslt);
}
