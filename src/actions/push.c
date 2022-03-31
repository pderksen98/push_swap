/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:36 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:45:14 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//Pushes the first node of list_a to list_b
//This node will be the first node in list_b
//If this node is NULL pointer the node is not pushed
void	pb(node_t **a, node_t **b)
{
	node_t	*temp;

	temp = *a;
	if (temp == NULL)
		return ;
	*a = temp->next;
	temp->next = *b;
	*b = temp;
	printf("pb\n");
}

//Pushes the first node of list_b to list_a
//This node will be the first node in list_a
//If this node is NULL pointer the node is not pushed
void	pa(node_t **a, node_t **b)
{
	node_t	*temp;

	temp = *b;
	if (temp == NULL)
		return ;
	*b = temp->next;
	temp->next = *a;
	*a = temp;
	printf("pa\n");
}
