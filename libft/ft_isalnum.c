/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:46:54 by ramrodri          #+#    #+#             */
/*   Updated: 2019/11/18 18:04:31 by ramrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	//if (c < 0)
	//	return (0);
	//if (ft_isdigit(c) != 0 || ft_isalpha(c) != 0)
	//	return (1);
	//return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);

}
/*
int main(int argc, char *argv[]) 
{
  if (argc!=2) {
    printf("Ha olvidado el parametro.\n");
    exit(1);
  }

  int num = (int)*argv[1];

	printf("Isalnum: %d\n", isalnum(num));
	printf("FT_isalnum: %d\n", ft_isalnum(num));
	return (0);
}
*/
