/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basakall <basakall@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:45:18 by basakall          #+#    #+#             */
/*   Updated: 2026/01/06 11:06:21 by basakall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
	return (1);
		return (0);

}
#include <stdio.h>
int main()
{
	printf("%d", ft_isdigit('a'));

}	
		