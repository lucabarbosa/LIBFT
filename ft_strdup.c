/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:31:27 by lbento            #+#    #+#             */
/*   Updated: 2025/07/23 10:14:42 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	size_t	size_s;
	char	*dest;
	size_t	i;

	size_s = ft_strlen(s);
	dest = (char *)malloc((size_s + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i <= size_s)
	{
	dest[i] = s[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main (void)
// {
// 	char *str = "String copied";
// 	char *dup;

// 	dup = ft_strdup(str);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }