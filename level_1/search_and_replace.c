/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <tlufulua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:38:41 by tlufulua          #+#    #+#             */
/*   Updated: 2022/07/24 21:04:35 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_arg(char *str)
{
	return (*(++str));
}

int	main(int argc, char **argv)
{
	if (check_arg(argv[2]) || check_arg(argv[3]))
		exit(1);
	while (argc == 4 && *argv[1])
	{
		if (*argv[1] == *argv[2])
			*argv[1] = *argv[3];
		write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
