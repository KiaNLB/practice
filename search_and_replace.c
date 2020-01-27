/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 23:26:25 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/26 00:15:57 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int  i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	else if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[2][1] != '\0' && argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	else 
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0); 
}
