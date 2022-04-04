/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:45 by pderksen      #+#    #+#                 */
/*   Updated: 2022/04/04 15:11:30 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <unistd.h> //write

//i is to check whether the node already has correct r_value
//0 if not, 1 if yes
typedef struct s_node
{
	int				value;
	int				r_value;
	int				i;
	struct s_node	*next;
}	t_node;

typedef enum e_true
{
	TRUE = 1,
	FALSE = 0
}	t_true;

void	print_stacks(t_node **a, t_node **b);
void	print_linked_list(t_node **head);
void	pb(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
t_node	*create_new_node(int value);
void	make_link_list(t_node **list, char **argv, int argc);
int		main(int argc, char **argv);
void	add_relative_number(t_node **list);
int		node_counter(t_node **list);
void	*make_copy(t_node **list, t_node **copy_list);
void	give_r_value_to_list(t_node **list, t_node **copy);
void	give_r_value_to_copy(t_node **copy);
void	bubble_sort_copy(t_node **list, int nodes);
void	free_list(t_node *list);
void	radix(t_node **a, t_node **b, int nodes);
void	error_check(int argc, char **argv);
void	error_message(char *string);
void	check_number(char *str);
void	check_malloc(void *ptr);
void	hard_code(t_node **a, t_node **b, int nodes);
int		check_sorted(t_node	**list);
int		find_place_of_lowest(t_node **a);
void	hard_code_3(t_node **a);
void	hard_code_4(t_node **a, t_node **b);
void	hard_code_5(t_node **a, t_node **b);
