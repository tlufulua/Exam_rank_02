/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <tlufulua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:41:36 by tlufulua          #+#    #+#             */
/*   Updated: 2022/07/24 18:49:41 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	char	*aux;

	aux = argv[1];
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		while (argv[1]-- != aux)
			write(1, argv[1], 1);
	}
	write(1, "\n", 1);
	return (0);
}
