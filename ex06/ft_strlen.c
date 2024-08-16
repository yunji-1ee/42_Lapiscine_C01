/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunlee <yunlee@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:17:13 by yunlee            #+#    #+#             */
/*   Updated: 2024/08/14 22:17:20 by yunlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}
/*
#include <stdio.h>

int main()
{
	int length = ft_strlen("helloWorld");
	printf("%d",length);
	return 0;
}
*/
