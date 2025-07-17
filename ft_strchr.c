/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:03:26 by lbento            #+#    #+#             */
/*   Updated: 2025/07/16 21:00:46 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c);

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
    while(str[i] != '\0')
	{
		if(str[i] == c)
		return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (0);
}
// #include <stdio.h>
// int main (void)
// {
// 	char *string = "Lucao";
// 	char *finded;

// 	finded = ft_strchr(string, 'c');
// 	printf("%s\n\n", finded);
// 	finded = ft_strchr(string, 'x');
// 	printf("%s\n\n", finded);
// 	finded = ft_strchr(string, '\n');
// 	printf("%s", finded);
// }