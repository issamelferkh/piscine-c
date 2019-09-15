/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:22:02 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/15 21:44:28 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		f;

	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	i = 1;
	f = 1;
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
