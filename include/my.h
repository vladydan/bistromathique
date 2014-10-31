/*
** my.h for my in /home/boulay_b/rendu/Piscine_C_J09/include
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct  9 11:53:18 2014 arnaud boulay
** Last update Fri Oct 31 16:08:47 2014 dimitri danilov
*/

#ifndef MY_H_
# define MY_H_

int	is_op(char c);
int	is_nbr(char c);
char	*expr(char *str, int *i, char *tmp, char *base);
char	*mul(char *str, int *i, char *tmp, char *base);
char	*add(char *str, int *i, char  *tmp, char *base);
int	my_put_nbr(int nb);
int	my_get_nbr(char *str);
void	my_putchar(char c);
int	my_putstr(char *str);
char	*my_get_str(char *str, char *base);
int	my_strlen(char *str);
char	*addition(char *str, char *str2);
typedef struct		s_addition
{
  int	taille_1;
  int	taille_2;
  int	position;
  int	retenu;
}			t_addition;
#endif /* !MY_H_ */
