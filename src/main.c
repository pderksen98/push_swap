/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 11:52:10 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/24 16:57:47 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(node_t **a, node_t **b)
{
	node_t	*temp;

	temp = *a;
	*a = temp->next;
	temp->next = *b;
	*b = temp;
}

// prints out a linked list
void	print_linked_list(node_t **head)
{
	node_t	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("value: %d, addres: %p, nextInLine%p\n", tmp->value, tmp, tmp->next);
		tmp = tmp->next;
	}
	if (tmp == NULL)
		printf("addres= %p\n", tmp);
}


node_t	*create_new_node(int value)
{
	node_t	*node;

	node = malloc(sizeof(node_t));
	ft_check_malloc(node);
	node->value = value;
	node->next = NULL;
	return (node);
}

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
		if (i == 0){
			temp = new_node;
			*list = temp;
		}
		else{
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

	list_a = NULL;
	list_b = NULL;
	make_link_list(&list_a, argv, argc);
	
	printf("** BEFORE PUSH b **\n");
	printf("STACK A:\n");
	print_linked_list(&list_a);
	printf("STACK B:\n");
	print_linked_list(&list_b);
			
	pb(&list_a, &list_b);
	pb(&list_a, &list_b);
	pb(&list_a, &list_b);
	
	printf("\n** AFTER PUSH b **\n");
	printf("STACK A:\n");
	print_linked_list(&list_a);
	printf("STACK B:\n");
	print_linked_list(&list_b);

	// system("leaks push_swap");
	return (0);
}
