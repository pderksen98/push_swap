/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   last_to_first.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 13:35:03 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/25 16:42:48 by pderksen      ########   odam.nl         */
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
	{
		printf("RRA NOT EXECUTED: NO NODE IN A\n");
		return ;
	}
	while (last->next != NULL)
	{
		if (last->next->next == NULL)
			temp = last;
		last = last->next;
	}
	if (last == *a)
	{
		printf("RRA NOT EXECUTED: 1 NODE IN A\n");
		return ;
	}
	temp->next = NULL;
	last->next = *a;
	*a = last;
	printf("** RRA **\n");
}

//Last node in list B will become the first node in B
void	rrb(node_t **b)
{
	node_t	*last;
	node_t	*temp;

	last = *b;
	if (last == NULL)
	{
		printf("RRB NOT EXECUTED: NO NODE IN B\n");
		return ;
	}
	while (last->next != NULL)
	{
		if (last->next->next == NULL)
			temp = last;
		last = last->next;
	}
	if (last == *b)
	{
		printf("RRA NOT EXECUTED: 1 NODE IN B\n");
		return ;
	}
	temp->next = NULL;
	last->next = *b;
	*b = last;
	printf("** RRB **\n");
}

//Calls both rra and rrb functions
void	rrr(node_t **a, node_t **b)
{
	rra(a);
	rrb(b);
}
