/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:49:45 by lbento            #+#    #+#             */
/*   Updated: 2025/07/17 19:08:39 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, int n);

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && i < n && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
// #include<stdio.h>
// int	main(void)
// {
// 	char *s1 = "Hello";
// 	char *s2= "Hello";
// 	int result;
// 	printf("%d\n", result = ft_strncmp(s1, s2, 0));
// }