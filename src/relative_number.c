/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   relative_number.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 15:12:58 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/28 18:21:21 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_link(node_t **list)
{
	node_t	*temp;

	temp = *list;
	while (temp != NULL)
	{
		printf("value: %d	addres: %p	 nextInLine: %p\n", temp->value, temp, temp->next);
		temp = temp->next;
	}
}

int	node_counter(node_t **list)
{
	node_t	*temp;
	int		i;

	temp = *list;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	bubble_sort(node_t **list, int nodes)
{
	int	j;
	
	j = nodes - 1;
	while (j > 0)
	{
		

		j--;
	}
}









void	put_relative_number(node_t **list)
{
	node_t	*copy_list;
	int	nodes;

	copy_list = *list;
	nodes = node_counter(list);

	// printf("** BEFORE BUBBLE SORT **\n");
	// print_link(&copy_list);
	bubble_sort(&copy_list, nodes);
	
	// printf("\n** AFTER BUBBLE SORT **\n");
	// print_link(&copy_list);
}
