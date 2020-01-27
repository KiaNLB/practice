/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:45:32 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/27 17:26:18 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int k;

	int result;

	i = 0;
	k = 0;
	if (argc == 4)
	{
		if (argv[2][0] == '*')
		{
			result = atoi(&argv[1][i]) * atoi(&argv[3][k]);
		}
		else if (argv[2][0] == '+')
		{
			result = atoi(&argv[1][i]) + atoi(&argv[3][k]);
		}
		else if (argv[2][0] == '/')
		{
			result = atoi(&argv[1][i]) / atoi(&argv[3][k]);
		}
		else if (argv[2][0] == '-')
		{
			result = atoi(&argv[1][i]) - atoi(&argv[3][k]);
		}
		else if (argv[2][0] == '%')
		{
			result = atoi(&argv[1][i]) % atoi(&argv[3][k]);
		}
		else
		{
			return (0);
		}
		i++;
		k++;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
