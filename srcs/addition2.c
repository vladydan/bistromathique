#include "../include/my.h"
#include <stdlib.h>

char			*addition(char *str_1, char *str_2, char *base)
{
  t_addition		add;
  char			*str3;

  add.taille_1 = my_strlen(str_1);
  add.taille_2 = my_strlen(str_2);
  if (add.taille_1 > add.taille_2)
    {
    str3 = malloc(sizeof(char) * add.taille_1 + 2);
    add.position = add.taille_1;
    }
  str3 = malloc(sizeof(char) * add.taille_2 + 2);
  add.position = add.taille_2;
  str3[add.position + 1] = '\0';
  if (str3 == NULL)
    return (NULL);
  while(add.taille_1 >= 1 && add.taille_2 >= 1)
    {
      str3[add.position] = str_1[add.taille_1 - 1] + str_2[add.taille_2 - 1]- 48;
      if (str3[add.position] >= 49 +longueur_base) 
         {
           str_1[add.taille_1 - 2]= str_1[add.taille_1 - 2] + 1; 
           str3[add.position] = str3[add.position] - 10; 
         }
      add.position = add.position - 1;
      add.taille_1 = add.taille_1 - 1;
      add.taille_2 = add.taille_2 - 1;
    }
  str3[0] = '+';
  str3[1] = 'a';
  return (str3);
}

