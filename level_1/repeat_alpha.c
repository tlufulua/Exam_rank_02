/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <tlufulua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:26:05 by tlufulua          #+#    #+#             */
/*   Updated: 2022/07/24 18:36:54 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;

	while (argc == 2 && *argv[1])
	{
		c = 0;
		if (*argv[1] >= 65 && *argv[1] <= 90)
			c = *argv[1] - 64;
		else if (*argv[1] >= 97 && *argv[1] <= 122)
			c = *argv[1] - 96;
		else
			write(1, argv[1], 1);
		while (c--)
			write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
