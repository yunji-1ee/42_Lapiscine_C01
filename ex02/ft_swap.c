/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunlee <yunlee@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:09:27 by yunlee            #+#    #+#             */
/*   Updated: 2024/08/14 19:09:34 by yunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main()
{
	int num1 = 4;
	int num2 = 2;
	ft_swap(&num1,&num2);
	printf("%d",num1);
	printf("%d",num2);
	return 0;
}
*/
