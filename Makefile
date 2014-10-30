##
## Makefile for eval_expr in /home/boulay_b/rendu/Piscine_C_eval_expr
## 
## Made by arnaud boulay
## Login   <boulay_b@epitech.net>
## 
## Started on  Sun Oct 26 13:32:10 2014 arnaud boulay
## Last update Thu Oct 30 13:33:06 2014 arnaud boulay
##

NAME	= calc

LIBNAME	= libmy

LIBFO	= lib/my/

SRCSFO	= srcs/

SRCS	= $(SRCSFO)main.c \
	  $(SRCSFO)eval_expr.c \

LIBSRCS	= $(LIBFO)is_nbr.c \
	  $(LIBFO)is_op.c \
	  $(LIBFO)my_atoi.c \
	  $(LIBFO)my_get_nbr.c \
	  $(LIBFO)my_putchar.c \
	  $(LIBFO)my_put_nbr.c \
	  $(LIBFO)my_putstr.c \
	  $(LIBFO)my_strlen.c

OBJS	= $(SRCS:.c=.o)

LIBOBJS	= $(LIBSRCS:.c=.o)

CFLAGS	+= -Iinclude -Wall -Werror -ansi -pedantic -g

all: $(LIBNAME) $(NAME)

$(LIBNAME): $(LIBOJBS)
	cc -c $(LIBSRCS)
	mv *.o lib/my
	ar rc $(LIBNAME).a $(LIBOBJS)
	ranlib $(LIBNAME).a
	mv $(LIBNAME).a lib/my

$(NAME): $(OBJS)
	cc -o $(NAME) srcs/$(OBJS) -lmy -Llib/my

clean:
	rm -f $(OBJS)
	rm -f $(LIBOBJS)

fclean: clean
	rm -f $(NAME)
	rm -f lib/my/$(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
