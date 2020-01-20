/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:23:41 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/20 18:57:35 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int k;
	int check;

	i = 0;
	k = 1;
	while(argv[1][i] == ' ')
	{
		i++;
	}
	while (argv[1][i] != '\0')
	{
		while (argv[1][i] == ' ')
		{
			i++;
			check = 1;
		}
		if (check == 1 && argv[1][i] != ' ')
		{
			write(1, " ", 1);
			check = 0;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	if (k > 1 && k < 1)
	{
		write(1, "\n", 1);
	}
	return (1);
}
