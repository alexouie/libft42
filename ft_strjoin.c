/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:56:17 by almanier          #+#    #+#             */
/*   Updated: 2025/11/27 13:05:55 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)

{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*cp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	cp = malloc(len + 1);
	if (cp == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cp[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		cp[i++] = s2[j++];
	cp[i] = '\0';
	return (cp);
}
