/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:20:47 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/21 18:50:01 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0' && argv[2][k] != '\0')
	{
		if (argv[1][i] == argv[2][k])
		{
			i++;	
		}
		k++;
	}
	if (argv[1][i] == '\0')
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
