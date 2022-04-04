/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 18:47:22 by pderksen      #+#    #+#                 */
/*   Updated: 2022/04/04 15:05:52 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Checks if the list is already sorted in ascending order
int	check_sorted(t_node	**list)
{
	t_node	*temp;

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
void	radix(t_node **a, t_node **b, int nodes)
{
	int		i;
	int		j;
	t_node	*temp1;

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
