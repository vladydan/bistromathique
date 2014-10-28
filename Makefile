##
## Makefile for eval_expr in /home/boulay_b/rendu/Piscine_C_eval_expr
## 
## Made by arnaud boulay
## Login   <boulay_b@epitech.net>
## 
## Started on  Sun Oct 26 13:32:10 2014 arnaud boulay
## Last update Tue Oct 28 15:30:20 2014 dimitri danilov
##

NAME	= bistro

SRCS	= bistro.c \
	  eval_expr.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Iinclude -Wall  -pedantic -g

all: $(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS) -lmy -Llib/my

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
