/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkendir <dkendir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:15:09 by dkendir           #+#    #+#             */
/*   Updated: 2024/01/31 12:26:28 by dkendir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (++c < 123)
		write (1, &c, 1);
}

/* int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
}
*/
