/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:33 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/25 13:35:45 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Swaps the first two nodes of list a
//Checks for both the nodes if they are NULL pointer
//If not: the nodes are swapped
void	sa(node_t **a)
{
	node_t	*temp1;
	node_t	*temp2;

	temp1 = *a;
	if (temp1 == NULL)
	{
		printf("SA NOT EXECUTED: FIRST IS NULL POINTER\n");
		return ;
	}
	temp2 = temp1->next;
	if (temp2 == NULL)
	{
		printf("SA NOT EXECUTED: SECOND IS NULL POINTER\n");
		return ;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
	*a = temp2;
	printf("** SA **\n");
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
	{
		printf("SB NOT EXECUTED: FIRST NODE IS NULL POINTER\n");
		return ;
	}
	temp2 = temp1->next;
	if (temp2 == NULL)
	{
		printf("SB NOT EXECUTED: SECOND NODE IS NULL POINTER\n");
		return ;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
	*b = temp2;
	printf("** SB **\n");
}

//Calls both functions sa and sb
void	ss(node_t **a, node_t **b)
{
	sa(a);
	sb(b);
}
