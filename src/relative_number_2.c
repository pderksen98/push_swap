/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   relative_number_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 15:09:49 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/29 15:11:08 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Gives the relative value to the bubble sorted copy
//Usefull when number is converted to binary
void	give_r_value_to_copy(node_t **copy)
{
	node_t	*temp;
	int		i;

	temp = *copy;
	i = 0;
	while (temp != NULL)
	{
		temp->r_value = i;
		i++;
		temp = temp->next;
	}
}

//Gives the correct r_value to the original list
//With use of r_value of copy list
void	give_r_value_to_list(node_t **list, node_t **copy)
{
	node_t	*temp;
	node_t	*temp2;

	temp = *copy;
	while (temp != NULL)
	{
		temp2 = *list;
		while (temp2 != NULL)
		{
			if (temp->value == temp2->value && temp2->i == 0)
			{
				temp2->r_value = temp->r_value;
				temp2->i = 1;
				break ;
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}
