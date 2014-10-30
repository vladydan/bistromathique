/*
** my.h for my in /home/boulay_b/rendu/Piscine_C_J09/include
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct  9 11:53:18 2014 arnaud boulay
** Last update Thu Oct 30 20:15:01 2014 dimitri danilov
*/

#ifndef MY_H_
# define MY_H_

int	is_op(char c);
int	is_nbr(char c);
char	*expr(char *str, int *i, char *tmp);
char	*mul(char *str, int *i, char *tmp);
char	*add(char *str, int *i, char  *tmp);
int	my_put_nbr(int nb);
int	my_get_nbr(char *str);
void	my_putchar(char c);

typedef struct		s_addition
{
  int	taille_1;
  int	taille_2;
  int	position;
  int	retenu;
}			t_addition;
#endif /* !MY_H_ */
