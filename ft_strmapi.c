/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:25:53 by almanier          #+#    #+#             */
/*   Updated: 2025/11/27 15:30:23 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tab;
	char	c;

	tab = malloc(sizeof(char) * (strlen(s) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c = f(i, s[i]);
		tab[i] = c;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
