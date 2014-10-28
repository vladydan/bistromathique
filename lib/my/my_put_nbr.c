/*
** my_put_nbr.c for my_put_nbr in /home/boulay_b/work/my_put_nbr
** 
** Made by arnaud boulay
** Login   <boulay_b@epitech.net>
** 
** Started on  Wed Oct  1 21:02:36 2014 arnaud boulay
** Last update Sat Oct 25 09:09:05 2014 arnaud boulay
*/

int	my_put_nbr(int nb)
{
  int	lenght;
  int	rslt;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  lenght = 1;
  while (nb / lenght > 9)
    lenght = lenght * 10;
  while (lenght > 0)
    {
      rslt = (nb / lenght) % 10;
      my_putchar(rslt + '0');
      lenght = lenght / 10;
    }
}
