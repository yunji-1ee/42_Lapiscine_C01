/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunlee <yunlee@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:53:29 by yunlee            #+#    #+#             */
/*   Updated: 2024/08/14 22:53:33 by yunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = temp;
		start ++;
		end --;
	}
}
/*
#include <stdio.h>
int main()
{
	int tab[] = {1,2,3,4,5};
	int size = 5;
	ft_rev_int_tab(tab,size);
	int i = 0;
	while (i < size)
	{
		printf("%d",tab[i]);
		i ++;
	}
return 0;
}
*/
