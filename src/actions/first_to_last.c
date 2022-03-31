/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   first_to_last.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 13:33:19 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:44:39 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//First node of A will be the last node in A
//Checks if there is more then one node
void	ra(node_t **a)
{
	node_t	*first;
	node_t	*last;

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
	printf("ra\n");
}

//First node of B will be the last node in B
//Checks if there is more then one node
void	rb(node_t **b)
{
	node_t	*first;
	node_t	*last;

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
	printf("rb\n");
}

//Calls both functions ra and rb
void	rr(node_t **a, node_t **b)
{
	ra(a);
	rb(b);
}
