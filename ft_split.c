/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <lbento@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:42:44 by lbento            #+#    #+#             */
/*   Updated: 2025/07/24 14:15:47 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
		int	total_word;
		char	**splited;
		int	i;
		int	start;
		int	end;
		
		if (!s)
			return (NULL);
		total_word = word_count(s, c);
		splited = (char **)malloc((total_word + 1) * sizeof(char));
		if (!splited)
			return (NULL);
		splited = '\0';
		i = 0;
		while (s[i])
		{
			if (s[i] != c)
				start = i;
		i++;
		}
}
static int	word_count(const char *str, char c)
{
	int	i;
	int	switc;
	int	word;

	i = 0;
	word = 0;
	switc = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && switc == 0)
		{
			switc = 1;
			word++;
		}
		else if (str[i] == c)
			switc = 0;
	i++;
	}
	return (word);
}
static char *fill_word(const char *str, int start, int end)
{
	
}
#include <stdio.h>
int	main(void)
{
	// char **result;

	// result = ft_split("Hello entire world", ' ');
	// i = 0;
	// while(result[i])
	// {
	// printf("-> %s ", total[i]);
	// i++;
	// }
	return (0);
}
