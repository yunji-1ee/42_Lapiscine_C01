/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunlee <yunlee@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:32:51 by yunlee            #+#    #+#             */
/*   Updated: 2024/08/14 23:32:53 by yunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i ++;
	}
}
/*
#include <stdio.h>
int main()
{
int tab[]={3,2,4,6,1};
int size = 5;

ft_sort_int_tab(tab,size);

for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");


return 0;
}
*/
