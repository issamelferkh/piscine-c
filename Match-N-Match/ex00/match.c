/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 05:40:52 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/20 10:51:07 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if (!(*s1) && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 && *s2 && *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (!(*s1) && !(*s2))
		return (1);
	return (0);
}
