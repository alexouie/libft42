/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:07:17 by almanier          #+#    #+#             */
/*   Updated: 2025/11/27 13:49:57 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

static size_t	get_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(const char *s1, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	if (end == 0)
		return (0);
	end--;
	while (end > start && is_in_set(s1[end], set))
		end--;
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*cp;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	len = end - start + 1;
	cp = malloc(len + 1);
	if (cp == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cp[i] = s1[start + i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
