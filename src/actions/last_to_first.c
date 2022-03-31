/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   last_to_first.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 13:35:03 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:45:04 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//Last node in list A will become the first node in A
void	rra(node_t **a)
{
	node_t	*last;
	node_t	*temp;

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
	printf("rra\n");
}

//Last node in list B will become the first node in B
void	rrb(node_t **b)
{
	node_t	*last;
	node_t	*temp;

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
	printf("rrb\n");
}

//Calls both rra and rrb functions
void	rrr(node_t **a, node_t **b)
{
	rra(a);
	rrb(b);
}
