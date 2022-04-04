/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 11:24:33 by pderksen      #+#    #+#                 */
/*   Updated: 2022/04/04 15:05:19 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//Swaps the first two nodes of list a
//Checks for both the nodes if they are NULL pointer
//If not: the nodes are swapped
void	sa(t_node **a)
{
	t_node	*temp1;
	t_node	*temp2;

	temp1 = *a;
	if (temp1 == NULL)
		return ;
	temp2 = temp1->next;
	if (temp2 == NULL)
		return ;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*a = temp2;
	ft_putstr_fd("sa\n", 1);
}

//Swaps the first two nodes of list b
//Checks for both the nodes if they are NULL pointer
//If not: the nodes are swapped
void	sb(t_node **b)
{
	t_node	*temp1;
	t_node	*temp2;

	temp1 = *b;
	if (temp1 == NULL)
		return ;
	temp2 = temp1->next;
	if (temp2 == NULL)
		return ;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*b = temp2;
	ft_putstr_fd("sb\n", 1);
}

//Calls both functions sa and sb
void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
}
