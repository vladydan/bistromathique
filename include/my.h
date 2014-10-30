/*
** my.h for my in /home/boulay_b/rendu/Piscine_C_J09/include
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct  9 11:53:18 2014 arnaud boulay
** Last update Thu Oct 30 10:55:55 2014 dimitri danilov
*/

#ifndef MY_H_
# define MY_H_

int	is_op(char c);
int	is_nbr(char c);
char	*expr(char *str, int *i, int tmp);
char	*mul(char *str, int *i, int tmp);
char	*add(char *str, int *i, int tmp);
int	my_put_nbr(int nb);
int	my_get_nbr(char *str);
void	my_putchar(char c);

#endif /* !MY_H_ */
