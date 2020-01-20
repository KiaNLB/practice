/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:57:50 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/20 19:25:45 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int check;

	i = 0;
	while (argv[1][i] == ' ')
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
			write(1, "   ", 3);
			check = 0;
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
