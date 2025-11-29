/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:56:17 by almanier          #+#    #+#             */
/*   Updated: 2025/11/29 15:18:44 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)

{
	size_t	i;
	size_t	j;
	char	*cp;

	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	cp = malloc((ft_strlen(s1) + ft_strlen(s2) +1) * sizeof(char ));
	if (cp == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
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
