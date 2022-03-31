/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:33 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:45:29 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//Swaps the first two nodes of list a
//Checks for both the nodes if they are NULL pointer
//If not: the nodes are swapped
void	sa(node_t **a)
{
	node_t	*temp1;
	node_t	*temp2;

	temp1 = *a;
	if (temp1 == NULL)
		return ;
	temp2 = temp1->next;
	if (temp2 == NULL)
		return ;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*a = temp2;
	printf("sa\n");
}

//Swaps the first two nodes of list b
//Checks for both the nodes if they are NULL pointer
//If not: the nodes are swapped
void	sb(node_t **b)
{
	node_t	*temp1;
	node_t	*temp2;

	temp1 = *b;
	if (temp1 == NULL)
		return ;
	temp2 = temp1->next;
	if (temp2 == NULL)
		return ;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*b = temp2;
	printf("sb\n");
}

//Calls both functions sa and sb
void	ss(node_t **a, node_t **b)
{
	sa(a);
	sb(b);
}
