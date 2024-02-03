/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkendir <dkendir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:41:34 by dkendir           #+#    #+#             */
/*   Updated: 2024/02/03 14:29:04 by dkendir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 47;
	while (++c < 58)
		write(1, &c, 1);
}

/*int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}*/
