/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 15:27:15 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/30 12:11:17 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// prints out a linked list
void	print_linked_list(node_t **head)
{
	node_t	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("value: %d, addres: %p, nextInLine: %p\n", tmp->value, tmp, tmp->next);
		tmp = tmp->next;
	}
	// if (tmp == NULL)
	// 	printf("addres= %p\n", tmp);
}

//Prints out the stacks and calls the actions
void	print_stacks(node_t **a, node_t **b)
{
	printf("STACK A:\n");
	print_linked_list(a);
	printf("STACK B:\n");
	print_linked_list(b);
	printf("\n\n");
}
