/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:41:58 by tlufulua          #+#    #+#             */
/*   Updated: 2022/07/07 23:04:55 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main()
{
	float	x;
	int		i;
	char	c;

	i = 1;
	while (i <= 100)
	{
		c = i + 48;
		x = i / 3;
		printf("%f\n", x);
		if (x - i)
			write(1, "fizz", 4);
		x = i / 5;
		printf("%f\n", x);
		if (x - i)
			write(1, "buzz", 4);
		else
			write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
