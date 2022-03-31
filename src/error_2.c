/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_2.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/31 15:48:34 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/31 17:02:18 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Prints error message 'string' and exits the program
void	error_message(char *string)
{
	string = NULL;
	
	ft_putstr_fd("Error\n", 2);
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
