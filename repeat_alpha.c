/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:56:54 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/20 17:12:17 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int k;
	int ns;

	i = 0;
	k = 1;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i]  >= 'A' && argv[1][i] <=  'Z')
		{
			ns = (argv[1][i] - 65) + 1;
			while (ns > 0) 
			{
				write(1, &argv[1][i], 1);
				ns--;
			}
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{	
			ns = (argv[1][i] - 97) + 1;
			while (ns > 0)
			{
				write(1, &argv[1][i], 1);
				ns--;
			}
		}
		i++;
	}
	return (0);
}
