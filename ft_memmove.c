/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:09:06 by lbento            #+#    #+#             */
/*   Updated: 2025/07/24 18:30:36 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pasted;
	const unsigned char	*copied;
	size_t				i;

	copied = (const unsigned char *)src;
	pasted = (unsigned char *)dest;
	if (pasted > copied)
	{
		while (n > 0)
		{
			n--;
			pasted[n] = copied[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			pasted[i] = copied[i];
			i++;
		}
	}
	return (dest);
}
#include <stdio.h>
int 	main(void)
{
	char str[11] = "Casa branca";
    int src[3] = {1, 2, 3};
    int dst[3];

    ft_memmove(dst, src, sizeof(src));
    printf("dst = [%d, %d, %d]\n", dst[0], dst[1], dst[2]);

	ft_memmove(str, "branca", 3);
    printf("%s\n", str);

    ft_memmove(str, "Test", 5);
    printf("%s\n", str);
	return (0);
}