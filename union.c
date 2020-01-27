/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:12:57 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/27 17:15:46 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[2][k] != '\0')
			{
				if (argv[1][i] == argv[2][k])
				{
					write(1, &argv[1][i], 1);
				}
				i++;
				k++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
