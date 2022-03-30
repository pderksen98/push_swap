/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 19:39:32 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/30 12:34:44 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Prints error message 'string' and exits the program
void	error_message(char *string)
{
	ft_putstr_fd("ERROR: ", 2);
	ft_putstr_fd(string, 2);
	exit(1);
}

//Checks if the character string 'str' only contains integers
void	check_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	if (!str[i])
		error_message("Wrong argument(s) given! (Only integers)\n");
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			error_message("Wrong argument(s) given! (Only integers) \n");
		i++;
	}
}

//Checks if the memmory is succesfully allocated
void	check_malloc(void *ptr)
{
	if (ptr == NULL)
		error_message("Malloc returned NULL pointer\n");	
}

//Checks the if the input is correct
// * At least 1 argument given
// * All the arguments are integers
void	error_check(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		error_message("No arguments given\n");
	while (i < argc)
	{
		check_number(argv[i]);
		i++;
	}
}
