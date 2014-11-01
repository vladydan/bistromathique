#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>
char     		*init_add(t_addition *add, char *str1, char *str2, char *str)
{
  add->taille_1 = my_strlen(str1);
  add->taille_2 = my_strlen(str2);
  if (add->taille_1 > add->taille_2)
    {
      str = malloc(sizeof(char) * add->taille_1 + 10);
      add->position = add->taille_1;
    }
  else
    {
      str = malloc(sizeof(char) * add->taille_2 + 10);
      add->position = add->taille_2;
    }
  if (str == NULL)
    return (NULL);
  str[add->position + 1] = '\0';
  str[0] = '+';
  return (str);
}
//int			complete(t_addition add, char *str1, char *str2, char *base)

char			*addition(char *str1, char *str2, char *base)
{
  t_addition		add;
  char			*str;
  int			i;
  int			j;

  str = init_add(&add, str1, str2, str);
  add.taille_base = my_strlen(base);
  while (add.taille_1 > 1 && add.taille_2 > 1)
    {
      i = 0;
      j = 0;
      while (base[i] != str1[add.taille_1 - 1])
	i++;
      while (base[j] != str2[add.taille_2 - 1])
	j++;
      str[add.position] = i + j;
      if (str[add.position] > add.taille_base)
	{
	str[add.position] = str[add.position] - add.taille_base;
	
      str[add.position] = base[str[add.position]];
      add.position--;
      add.taille_1--;
      add.taille_2--;
    }
      //  str = complete(&add, str, str1, str2
  str[1] = '0';
  return (str);
}
int	main()
{

  char  *nbr = "+F";
  char  *nbr2 = "+F";
  char	*base = "0123456789ABCDEF";
  char	*str;
  str = addition(nbr, nbr2, base);
  if (str[1] == '0')
    my_putstr(&str[2]);
  else
    my_putstr(&str[1]);
}

