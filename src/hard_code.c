/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hard_code.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 12:59:41 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:53:49 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Finds and returns the node of the lowest value
int	find_place_of_lowest(node_t **a)
{
	int		i;
	int		lowest_value;
	node_t	*temp;

	temp = *a;
	i = 1;
	lowest_value = temp->value;
	while (temp != NULL)
	{
		if (temp->value < lowest_value)
			lowest_value = temp->value;
		temp = temp->next;
	}
	temp = *a;
	while (temp->value != lowest_value)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

//Hard codes 3 input arguments
void	hard_code_3(node_t **a)
{
	node_t	*temp;

	temp = *a;
	if (temp->value < temp->next->value
		&& temp->value < temp->next->next->value)
	{
		rra(a);
		sa(a);
	}
	else if (temp->value < temp->next->value
		&& temp->value > temp->next->next->value)
		rra(a);
	else if (temp->value < temp->next->next->value)
		sa(a);
	else if (temp->next->value < temp->next->next->value)
		ra(a);
	else
	{
		ra(a);
		ra(a);
	}
}

//Hard codes 4 input arguments
void	hard_code_4(node_t **a, node_t **b)
{
	int	lowest;

	lowest = find_place_of_lowest(a);
	if (lowest > 1)
	{
		if (lowest == 4)
			rra(a);
		else if (lowest == 3)
		{
			ra(a);
			ra(a);
		}
		else if (lowest == 2)
			ra(a);
	}
	pb(a, b);
	hard_code_3(a);
	pa(a, b);
}

//Hard codes 5 input arguments
void	hard_code_5(node_t **a, node_t **b)
{
	int	lowest;

	lowest = find_place_of_lowest(a);
	if (lowest > 1)
	{
		if (lowest == 5)
			rra(a);
		else if (lowest == 4)
		{
			rra(a);
			rra(a);
		}
		else if (lowest == 3)
		{
			ra(a);
			ra(a);
		}
		else if (lowest == 2)
			ra(a);
	}
	pb(a, b);
	hard_code_4(a, b);
	pa(a, b);
}

//For 2, 3, 4 and 5 input arguments
//Hard codes the swaps for better efficiency
void	hard_code(node_t **a, node_t **b, int nodes)
{
	node_t	*temp;

	temp = *a;
	if (check_sorted(a) == TRUE)
		return ;
	if (nodes == 2)
	{
		if (temp->value > temp->next->value)
			sa(a);
	}
	else if (nodes == 3)
		hard_code_3(a);
	else if (nodes == 4)
		hard_code_4(a, b);
	else if (nodes == 5)
		hard_code_5(a, b);
}
