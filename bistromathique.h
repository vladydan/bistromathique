/*
** bistromathique.h for bistromathique in .
** 
** Made by Charlie Root
** Login   <rn@epita.fr>
** 
** Started on  Tue Oct 23 11:48:35 2001 Charlie Root
** Last update Thu Oct 30 10:34:49 2014 dimitri danilov
*/

/*
** should be remove if you include stdlib.h (malloc.h does it)
*/
/*
**
*/
#define	OP_OPEN_PARENT_IDX	0
#define	OP_CLOSE_PARENT_IDX	1
#define	OP_PLUS_IDX		2
#define	OP_SUB_IDX		3
#define	OP_NEG_IDX		3
#define OP_MULT_IDX		4
#define OP_DIV_IDX		5
#define OP_MOD_IDX		6
#define	SYNTAXE_ERROR_MSG	"syntax error\n"

char	*eval_expr(char *base, char *ops, char *expr, unsigned int size);
