/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmucuate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:22:48 by jmucuate          #+#    #+#             */
/*   Updated: 2024/10/30 16:41:58 by jmucuate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[a] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b] && to_find[b] != '\0')
		{
			b++;
		}
		if (to_find[b] == '\0')
		{
			return (str[a]);
		}
		a++;
	}
}
