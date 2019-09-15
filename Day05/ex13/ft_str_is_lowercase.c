/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 10:56:54 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/23 04:40:30 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if ((str[i] < 'a') || (str[i] > 'z'))
				return (0);
			++i;
		}
		return (1);
	}
	return (1);
}
