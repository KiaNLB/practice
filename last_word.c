/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:24:48 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/23 13:31:14 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int last_word(char *str)
{
	int i = 1;
	int c = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			c = i;
		if (str[i] != '\t' && str[i - 1] == '\t')
			c = i;
		i++;
	}
	while (str[c] != '\0' && str[c] != ' ' && str[c] != '\t')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
	} else {
		last_word(av[1]);
	}
	return (0);
}
