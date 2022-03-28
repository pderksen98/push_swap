/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 11:52:10 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/28 12:57:36 by pderksen      ########   odam.nl         */
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

//Creates a new node with value: value
//This nodes points to NULL (next = NULL)
node_t	*create_new_node(int value)
{
	node_t	*node;

	node = malloc(sizeof(node_t));
	ft_check_malloc(node);
	node->value = value;
	node->next = NULL;
	return (node);
}

//Makes a linked list with the command line arguments
//Each node is added at the end of the list
//"./pushswap 1 2 3 4" : 1 2 3 4 -> NULL
void	make_link_list(node_t **list, char **argv, int argc)
{
	node_t	*new_node;
	node_t	*temp;
	int		value;
	int		i;

	i = 0;
	while (i < (argc - 1))
	{
		value = ft_atoi(argv[i + 1]);
		new_node = create_new_node(value);
		if (i == 0)
		{
			temp = new_node;
			*list = temp;
		}
		else
		{
			temp->next = new_node;
			temp = new_node;
		}
		i++;
	}
}

//Prints out the stacks and calls the actions
void	print_stacks_call_actions(node_t **a, node_t **b)
{
	printf("STACK A:\n");
	print_linked_list(a);
	printf("STACK B:\n");
	print_linked_list(b);
	printf("\n");

	rrr(a, b);
	pb(a, b);
	pb(a, b);
	pb(a, b);
	sb(b);
	pa(a, b);

	printf("\n");
	printf("STACK A:\n");
	print_linked_list(a);
	printf("STACK B:\n");
	print_linked_list(b);
}

void	print_list_and_r_value(node_t **list)
{
	node_t	*temp;

	temp = *list;
	while (temp != NULL)
	{
		printf("value: %d	r_value: %d\n", temp->value, temp->r_value);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	node_t	*list_a;
	node_t	*list_b;

	list_a = NULL;
	list_b = NULL;
	make_link_list(&list_a, argv, argc);
	put_relative_number(&list_a);
	//print_stacks_call_actions(&list_a, &list_b);
	//print_list_and_r_value(&list_a);
	// system("leaks push_swap");
	return (0);
}
