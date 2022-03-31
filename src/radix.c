/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 18:47:22 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:51:22 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Checks if the list is already sorted in ascending order
int	check_sorted(node_t	**list)
{
	node_t	*temp;

	temp = *list;
	while (temp->next != NULL)
	{
		if (temp->next->value < temp->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

//Using radix algoritm to sort list a
void	radix(node_t **a, node_t **b, int nodes)
{
	int		i;
	int		j;
	node_t	*temp1;

	j = 0;
	while (check_sorted(a) == FALSE)
	{
		i = 0;
		while (i < nodes)
		{
			temp1 = *a;
			if (((temp1->r_value) >> j) % 2 == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b != NULL)
			pa(a, b);
		j++;
	}
}
