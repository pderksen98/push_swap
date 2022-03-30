/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hard_code.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 12:59:41 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/30 14:19:38 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	hard_code_3(node_t **a, node_t **b)
{
	node_t	*temp;
	node_t	*temp2;

	temp = *a;
	if (check_sorted(a) == FALSE)
	{
		if (temp->value > temp->next->value &&
		\\ temp->next->value > temp->next->next->value)
			ra(a);
		if (temp->value > temp->next->value &&
		\\ temp->next->value < temp->next->next->value)
		{
			ra(a);
			sa(a);
		}
	}	
}

void	hard_code(node_t **a, node_t **b, int nodes)
{
	if (nodes == 3)
		hard_code_3(a, b);
	if (nodes == 4)
		hard_code_4(a, b);
	if (nodes == 5)
		hard_code_5(a, b);
}