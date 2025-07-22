/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:49:35 by lbento            #+#    #+#             */
/*   Updated: 2025/07/22 20:41:20 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

static size_t	ft_count_numb(int n)
{
	int	i;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
	}
	i = 0;
	while (n > 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size_int;
	char		*total;
	size_t		i;
	
	size_int = ft_count_numb(n);
	if (n < 0)
		size_int++;
	total = malloc(size_int + 1);	
	while (i > 0)
	{
		total[i] = (n % 10) + '0';
		i--;
	}
	return (total);
}
//#include <stdio.h>
//int	main(void)
//{
//	char result;
//	result = ft_itoa(123);
//	printf("Convertido: %s\n", result);
//	free (result);
//	result = ft_itoa(0);
//	printf("Convertido: %s\n", result);
//	free (result);
//	result = ft_itoa(2147483647);
//	printf("Convertido: %s\n", result);
//	free (result);
//	result = ft_itoa(-253);
//	printf("Convertido: %s\n", result);
//	free (result);
//	result = ft_itoa(-2147483648);
//	printf("Convertido: %s\n", result);
//	free (result);
//	return (0);
//}
