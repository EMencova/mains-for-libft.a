/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:04:39 by emencova          #+#    #+#             */
/*   Updated: 2023/10/22 13:57:44 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Uncomment only functions you are testing and compile with libft.a*/
/*char	my_mapifunc(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str);
}

 void    ft_test(unsigned int i, char *str)
{
	*str += i;
}
*/	
int	main()
{
/*	testing substr*
	char	str[] = "Lets see if it works!";
	ft_putendl_fd(ft_substr(str, 12, 10), 1);

	testing strjoin
	char	str[] = "If I use this, ";
	char	str1[] = "it will continue!";
	ft_putendl_fd(ft_strjoin(str, str1), 1);

	testing strtrim

	char	str[] = "Is it going to work?";
	char	str1[] = "Is it";
	ft_putendl_fd(ft_strtrim(str, str1), 1);

	testing ft_split*/
	char	str[] = "I will be split, look!";
	char	c = 'l';
	char	**spt = ft_split(str, c);
	int	i = 0;
	while (spt[i] != 0)
	{
		ft_putstr_fd(spt[i], 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
	
	
	/*testing itoa!*/
/*	int	i = 16;
	int	j = -288;
	int	min = -2147483648;
	int	max = 2147483647;
	ft_putstr_fd(ft_itoa(i), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(j), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(min), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(max), 1);
	ft_putchar_fd('\n', 1);
	*/
	/*Testing strmapi uncomment the above function also
	char str[10] = "hello.";
	char *result = ft_strmapi(str, my_mapifunc);
	printf("The result is %s\n", result);
	return 0;*/

	/*Testing striteri -  uncomment second function above*/
/*
	char	str[] = "aBcDeF";
	ft_striteri(str, ft_test);
	ft_putendl_fd(str, 1);
	*/
}
