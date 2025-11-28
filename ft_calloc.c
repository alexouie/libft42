/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <almanier@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:01:42 by almanier          #+#    #+#             */
/*   Updated: 2025/11/28 12:09:47 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			lsize;
	unsigned char	*p;
	size_t			i;

	lsize = nmemb * size;
	if (nmemb != 0 && lsize / nmemb != size)
		return (NULL);
	ptr = malloc(lsize);
	if (ptr == NULL)
		return (NULL);
	p = (unsigned char *)ptr;
	i = 0;
	while (i < lsize)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
