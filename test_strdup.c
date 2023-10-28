/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:02:03 by emencova          #+#    #+#             */
/*   Updated: 2023/10/21 15:02:49 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
/* compile with libft.a*/

int     main()
{
        char    str[] = "Hello!";
        char    str1[] = "How are you!";
        char    str2[] = "its a beautiful day!";
        ft_putendl_fd(ft_strdup(str), 1);
        ft_putendl_fd(ft_strdup(str1), 1);
        ft_putendl_fd(ft_strdup(str2), 1);
}
