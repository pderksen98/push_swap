/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 19:39:32 by pderksen      #+#    #+#                 */
/*   Updated: 2022/03/29 20:48:06 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_message(char *string)
{
	ft_putstr_fd("Error: ", 2);
	ft_putstr_fd(string, 2);
	ft_putstr_fd("\n", 2);
	exit(1);
}
