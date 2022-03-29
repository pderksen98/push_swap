/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:45 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/29 19:18:13 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <unistd.h> //write

//i is to check whether the node already has correct r_value
//0 if not, 1 if yes
typedef struct node 
{
	int		value;
	int		r_value;
	int		i;
	struct 	node* next;
}	node_t;

typedef enum e_true
{
	TRUE = 1,
	FALSE = 0
}	t_true;

void	print_stacks(node_t **a, node_t **b);
void	print_linked_list(node_t **head);

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
void	add_relative_number(node_t **list);
int		node_counter(node_t **list);
void	*make_copy(node_t **list, node_t **copy_list);
void	give_r_value_to_list(node_t **list, node_t **copy);
void	give_r_value_to_copy(node_t **copy);
void	bubble_sort_copy(node_t **list, int nodes);
void	free_list(node_t *list);
void	radix(node_t **a, node_t **b, int nodes);