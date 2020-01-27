/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 06:14:00 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/26 06:37:25 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else 
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				argv[1][i] = argv[1][i] + 13;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				argv[1][i] = argv[1][i] + 13;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
				argv[1][i] = argv[1][i] - 13;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			{
				argv[1][i] = argv[1][i] - 13;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
