/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:40:45 by lbento            #+#    #+#             */
/*   Updated: 2025/07/16 20:03:01 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, int limit);

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcat(char *dest, char *src, int limit)
{
	int	i;
	int	size_dest;
	int	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (limit <= size_dest)
		return (limit + size_src);
	i = 0;
	while ((src[i] != '\0') && ((i < limit - size_dest - 1)))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
// #include <stdio.h>
// int main (void)
// {
//     char dest[20] = "Hello";
//     char *src = " World";
//     int total;

//     total = ft_strlcat(dest, src, 10);
//     printf("%d\n\n", total);
//     printf("%s", dest);   
// }