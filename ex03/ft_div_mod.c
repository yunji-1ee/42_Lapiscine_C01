/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunlee <yunlee@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:04:15 by yunlee            #+#    #+#             */
/*   Updated: 2024/08/14 20:04:18 by yunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
	int num1 = 9;
	int num2 = 2;
	int div;
	int mod;

	ft_div_mod(num1,num2,&div,&mod);
	printf("%d\n",div);
	printf("%d",mod);

	return 0;
}
*/
