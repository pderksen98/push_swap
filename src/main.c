/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 11:52:10 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:48:23 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Frees a linked list
void	free_list(node_t *list)
{
	node_t	*temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}

//Creates a new node with value: value
//This nodes points to NULL (next = NULL)
node_t	*create_new_node(int value)
{
	node_t	*node;

	node = malloc(sizeof(node_t));
	check_malloc(node);
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
		new_node->i = 0;
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

int	main(int argc, char **argv)
{
	node_t	*list_a;
	node_t	*list_b;
	int		nodes;

	list_a = NULL;
	list_b = NULL;
	error_check(argc, argv);
	make_link_list(&list_a, argv, argc);
	add_relative_number(&list_a);
	nodes = node_counter(&list_a);
	if (nodes > 1)
	{
		if (nodes <= 5)
			hard_code(&list_a, &list_b, nodes);
		else
			radix(&list_a, &list_b, nodes);
	}
	return (0);
}
