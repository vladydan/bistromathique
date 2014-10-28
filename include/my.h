/*
** my.h for my in /home/boulay_b/rendu/Piscine_C_J09/include
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Thu Oct  9 11:53:18 2014 arnaud boulay
** Last update Tue Oct 28 15:04:51 2014 arnaud boulay
*/

#ifndef MY_H_
# define MY_H_

int	is_nbr(char c);
int	expr(char *str, int *i, int tmp);
int	mul(char *str, int *i, int tmp);
int	add(char *str, int *i, int tmp);
int	eval_expr(char *expr);
int	my_put_nbr(int nb);
int	my_get_nbr(char *str);
void	my_putchar(char c);

#endif /* !MY_H_ */
