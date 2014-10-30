int	is_nbr2(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	my_atoi(char *str)
{
  int	i;
  int	nbr;
  
  i = 0;
  nbr = 0;
  while (is_nbr2(str[i]) == 1)
    {
      nbr = (nbr * 10) + str[i] - '0';
      i = i + 1;
    }
  return (nbr);
}
