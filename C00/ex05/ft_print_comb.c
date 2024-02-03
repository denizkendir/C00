/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkendir <dkendir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:31:46 by dkendir           #+#    #+#             */
/*   Updated: 2024/01/31 12:45:21 by dkendir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/* int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
