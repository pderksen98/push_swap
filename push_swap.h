/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:45 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/25 16:03:01 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <unistd.h> //write

typedef struct node 
{
	int		value;
	int		r_value;
	struct 	node* next;
}	node_t;

void	pb(node_t **a, node_t **b);
void	pa(node_t **a, node_t **b);
void	sa(node_t **a);
void	sb(node_t **b);
void	ss(node_t **a, node_t **b);
void	ra(node_t **a);
void	rb(node_t **b);
void	rr(node_t **a, node_t **b);
void	rra(node_t **a);
void	rrb(node_t **b);
void	rrr(node_t **a, node_t **b);
void	print_linked_list(node_t **head);
node_t	*create_new_node(int value);
void	make_link_list(node_t **list, char **argv, int argc);
int		main(int argc, char **argv);

void	put_relative_number(node_t **list);
int		node_counter(node_t **list);
int		find_lowest_value(node_t **list);