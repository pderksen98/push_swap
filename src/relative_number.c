/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   relative_number.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 15:12:58 by pderksen      #+#    #+#                 */
/*   Updated: 2022/04/04 15:05:57 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Makes a copy of the original list
//Same values but different pointers
void	*make_copy(t_node **list, t_node **copy_list)
{
	t_node	*copy;
	t_node	*temp;
	t_node	*new_node;
	int		i;

	i = 0;
	temp = *list;
	while (temp != NULL)
	{
		new_node = create_new_node(temp->value);
		if (i == 0)
		{
			copy = new_node;
			*copy_list = copy;
		}
		else
		{
			copy->next = new_node;
			copy = new_node;
		}
		i++;
		temp = temp->next;
	}
	return (copy);
}

//Counts the number of node in 'list'
int	node_counter(t_node **list)
{
	t_node	*temp;
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

//Bubble sorts the values (not pointers) of the copy
//If value A > value B -> swap A to the right
//Sorts values in acending order
void	bubble_sort_copy(t_node **list, int nodes)
{
	t_node	*temp;
	int		tmp;
	int		j;

	while (nodes > 1)
	{
		j = nodes - 1;
		temp = *list;
		while (j > 0)
		{
			if (temp->value > temp->next->value)
			{
				tmp = temp->next->value;
				temp->next->value = temp->value;
				temp->value = tmp;
			}
			temp = temp->next;
			j--;
		}
		nodes--;
	}
}

//Calls the functions in order to give the r_value to the list
// values:  4 -> 2 -> -3 -> 17 
// r_values 2 -> 1 ->  0 -> 3 
//Makes transformation to binary easier/faster
void	add_relative_number(t_node **list)
{
	t_node	*copy_list;
	int		nodes;

	copy_list = NULL;
	make_copy(list, &copy_list);
	nodes = node_counter(list);
	bubble_sort_copy(&copy_list, nodes);
	give_r_value_to_copy(&copy_list);
	give_r_value_to_list(list, &copy_list);
	free_list(copy_list);
}
