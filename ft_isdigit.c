/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:24:29 by almanier          #+#    #+#             */
/*   Updated: 2025/11/04 15:38:58 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)

{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isdigit('5')); // 1
    printf("%d\n", ft_isdigit('a')); // 0
}

*/
