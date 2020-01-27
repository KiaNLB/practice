/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbintcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:06:08 by kbintcli          #+#    #+#             */
/*   Updated: 2020/01/27 14:23:14 by kbintcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char  *ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dest = (char *) malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char *dest;

	dest = ft_strdup("hi there");
	printf("%s", dest);
	free(dest);
	return (0);
}*/
