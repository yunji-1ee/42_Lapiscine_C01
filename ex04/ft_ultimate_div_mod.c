/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunlee <yunlee@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:32:36 by yunlee            #+#    #+#             */
/*   Updated: 2024/08/14 21:32:42 by yunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int main(){
	int num1 = 9;
	int num2 = 2;

	ft_ultimate_div_mod(&num1, &num2);

	printf("div : %d\n",num1);
	printf("mod : %d",num2);

	return 0;
}
*/
