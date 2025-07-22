/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:22:14 by lbento            #+#    #+#             */
/*   Updated: 2025/07/19 20:22:14 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t 	total;
	size_t	i;
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	total = nmemb * size;
	if (total / size != nmemb)
		return (0);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
//#include <stdio.h>
//int	main(void)
//{
//	int	*test;
//	test = ft_calloc(3, 2);
//	printf("%n\n", test);
//	return(0);
//}