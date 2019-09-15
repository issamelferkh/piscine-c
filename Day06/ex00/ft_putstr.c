/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 18:47:12 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/18 07:26:32 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
