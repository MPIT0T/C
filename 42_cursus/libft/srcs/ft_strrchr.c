/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:35:24 by mpitot            #+#    #+#             */
/*   Updated: 2023/11/08 16:35:24 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	if (!s)
		return (NULL);
	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == c)
			last = &((char *) s)[i];
		i++;
	}
	return (last);
}