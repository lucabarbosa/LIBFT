/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:53:59 by lbento            #+#    #+#             */
/*   Updated: 2025/07/16 17:52:42 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>
// int main (void)
// {
//     char *s = "";
//     int amount;

//     amount = ft_strlen(s);
//     printf("%d\n", amount);
// }
