/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:53:31 by lbento            #+#    #+#             */
/*   Updated: 2025/07/16 21:16:11 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c);

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
    while (str[i] != '\0')
    {
	    if (str[i] == c)
	    {
		    j = i;
	    }
	    i++;
    }
	if (j != 0)
	return (&str[j]);
	if (c == '\0')
	return (str);
    return (0);
}
// #include <stdio.h>
// int main (void)
// {
// 	char *string = "Lucaocao";
// 	char *finded;
// 	finded = ft_strrchr(string, 'c');
// 	printf("%s\n\n", finded);
// 	finded = ft_strrchr(string, 'x');
// 	printf("%s\n\n", finded);
// 	finded = ft_strrchr(string, '\n');
// 	printf("%s", finded);
// }
