/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkendir <dkendir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:51:46 by dkendir           #+#    #+#             */
/*   Updated: 2024/01/31 12:26:30 by dkendir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 123;
	while (--c >= 97)
		write(1, &c, 1);
}

/* int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}
*/
