int	neg(char *str)
{
  int	i;
  int	c;
  
  i = 0;
  c = 0;
  while (str[i] == '-' && str[i] == '+')
    {
      if (str[i] == '-')
	{
	  c ++;
	}
      i++;
    }
  if (c % 2 != 0)
    {
      return (1);
    }
  else
    return (0);
}
int	is_true(char c)
{
  if (c >= 48 && c <= '9')
    {
      return (1);
    }
  else 
    {
      return (0);
    }
}

int	my_get_nbr(char *str)
{
  int	nbr;
  int	i;
  nbr = 0;
  i = 0;
  while (is_true(str[i]) == 0)
    {
      i++;
    }
  while (is_true(str[i]) == 1)
    {
      nbr = (nbr * 10) + (str[i] - 48);
      i++;
    }
  if (neg(str) == 1)
    {
      nbr = nbr * -1;
    }
return (nbr);
}
