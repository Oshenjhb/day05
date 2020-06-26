/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:23:46 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/26 16:00:47 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dest = str1;
		char str1 = str2;

{
	while(*src) {
		*dest = *src;
	   src++;
	   dest++;
	}
	*dest = '\0';
}

int main()
{
	*dest=
	char str1[10];
	char str2[15];
    unsigned int n = 7;

	strcpy(str2, "i at username.com");
	strncpy(str1, str2, n);

	printf("string str1, %s\n", str1);
	printf("string str2, %s\n", str2);
	return (0);
}
