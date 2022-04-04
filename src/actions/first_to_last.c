/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   first_to_last.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 13:33:19 by pderksen      #+#    #+#                 */
/*   Updated: 2022/04/04 15:04:28 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//First node of A will be the last node in A
//Checks if there is more then one node
void	ra(t_node **a)
{
	t_node	*first;
	t_node	*last;

	last = *a;
	if (last == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	first = *a;
	if (last == first)
		return ;
	*a = first->next;
	last->next = first;
	first->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

//First node of B will be the last node in B
//Checks if there is more then one node
void	rb(t_node **b)
{
	t_node	*first;
	t_node	*last;

	last = *b;
	if (last == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	first = *b;
	if (last == first)
		return ;
	*b = first->next;
	last->next = first;
	first->next = NULL;
	ft_putstr_fd("rb\n", 1);
}

//Calls both functions ra and rb
void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
}
