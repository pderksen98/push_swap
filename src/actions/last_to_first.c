/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   last_to_first.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 13:35:03 by pderksen      #+#    #+#                 */
/*   Updated: 2022/04/04 15:04:39 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//Last node in list A will become the first node in A
void	rra(t_node **a)
{
	t_node	*last;
	t_node	*temp;

	last = *a;
	if (last == NULL)
		return ;
	while (last->next != NULL)
	{
		if (last->next->next == NULL)
			temp = last;
		last = last->next;
	}
	if (last == *a)
		return ;
	temp->next = NULL;
	last->next = *a;
	*a = last;
	ft_putstr_fd("rra\n", 1);
}

//Last node in list B will become the first node in B
void	rrb(t_node **b)
{
	t_node	*last;
	t_node	*temp;

	last = *b;
	if (last == NULL)
		return ;
	while (last->next != NULL)
	{
		if (last->next->next == NULL)
			temp = last;
		last = last->next;
	}
	if (last == *b)
		return ;
	temp->next = NULL;
	last->next = *b;
	*b = last;
	ft_putstr_fd("rrb\n", 1);
}

//Calls both rra and rrb functions
void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
}
