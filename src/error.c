/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 19:39:32 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 15:52:11 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Makes integer array with input arguments
//This is done to check whether there are duplicates
int	*make_int_array(int argc, char **argv)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(sizeof(int) * argc);
	check_malloc(array);
	while (i < (argc - 1))
	{
		array[i] = (ft_atoi(argv[i + 1]));
		i++;
	}
	return (array);
}

//Checks if there are duplicate input arguments
void	check_duplicate(int *array, int argc)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	while (i < (argc - 1))
	{
		value = array[i];
		j = i + 1;
		while (j < (argc - 1))
		{
			if (array[j] == value)
				error_message("Duplicate input arguments\n");
			j++;
		}
		i++;
	}
}

//Checks the if the input is correct
// * At least 1 argument given
// * All the arguments are integers
void	error_check(int argc, char **argv)
{
	int	i;
	int	*array;

	i = 1;
	if (argc == 1)
		error_message("No arguments given\n");
	while (i < argc)
	{
		check_number(argv[i]);
		i++;
	}
	array = make_int_array(argc, argv);
	check_duplicate(array, argc);
	free(array);
}
