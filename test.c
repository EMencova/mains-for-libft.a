#include "libft.h"

int	main()
{
/* uncomment only function you are testing and change variables to your liking, compile with libft.a  */
	char	str0[50];
	char	str0t[50];
	char	*test;
	int		*array;
	int		*arrayt;
	int		i;
	char		*mine;
	char		*official;
	char	*mine1;
	char	*off;
	int		minei;
	int		offi;
	char str[25]= "test my code";
	char str2[25]= "and run it";
	char strt[25]= "test my code";
	char str2t[25]= "and run it";
	int		a;
	int		at;
	const char	*s;
	const char	*st;
	const char	*s1;
	s = "Test.My.Code ";
	st = "Test.My.Code ";
	s1 = "My.Code";
	a = '.';
	at = '.';
	char ch = 'm';
	char cht = 'm';
	const char atoim[] = "-965";
	const char atoit[] = "-965";
	i = 3;
/*
	printf("\nstrlen of hello is %zu = %zu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("isalpha of a is %d = %d\n", ft_isalpha('a'), isalpha('a'));
	printf("is digit of a is %d = %d\n", ft_isdigit('a'), isdigit('a'));
	printf("is isalnum of + is %d = %d\n", ft_isalnum('+'), isalnum('+'));
	printf("is ascii of + is %d = %d\n", ft_isascii('+'), isascii('+'));
	printf("is print of a is %d = %d\n\n", ft_isprint('a'), isprint('a'));

	printf("This is testing sentence\n");
	strcpy(str0, "This is testing sentence");
	strcpy(str0t,"This is testing sentence");
	mine = ft_memset(str0, 'i', 4);
	official = memset(str0t, 'i', 4);
	printf("%s =  mine\n", str0);
	printf("%s =  official\n", str0t);
	if (strcmp(mine, official) == 0)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");
	
	ft_bzero(str2, 1);
	printf("test my bzero =  %s\n", str2);
	bzero(str2t, 1);
	printf("test official bzero = %s\n", str2t);


	printf("testing memcpy\n\n");
	mine = ft_memcpy(str, &str[5], 4);
	official = memcpy(strt, &strt[5], 4);
	if (strcmp(mine, official) == 0)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");

	printf("testing my memmove function\n\n");
	mine = ft_memmove(str, &str[5], 4);
	official = memmove(strt, &strt[5], 4);
	if (strcmp(mine, official) == 0)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");


	printf("testing strlcpy\n\n");
	ft_strlcpy(str0, s, 15);
	printf("%s\n", str0);
*/

	printf("testing strlcat\n\n");
	ft_strlcat(str, str2, 25);
	printf("%s\n", str);
/*

	printf("change to upper- a - %c = %c\n", ft_toupper('a'), toupper('a'));
	printf("change to lower- B - %c = %c\n\n", ft_tolower('B'), tolower('B'));
	
	printf("testing strchr\n\n");
	
	mine = ft_strchr(s, a);
	official = strchr(st, at);
	 if (strcmp(mine, official) == 0)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");


	printf("Testing strrchr!\n\n");
	mine = ft_strrchr(s, a);
	official = strrchr(st, at);
	 if (strcmp(mine, official) == 0)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");


	printf("testing strncmp!\n\n");
	a = 5;
	at = 5;
	minei = ft_strncmp(str, str2, i);
	offi = strncmp(strt, str2t, i);
	if (minei == offi)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");

		
	printf("testing memchr!\n\n");
	mine = ft_memchr(str, ch, i);
	official = memchr(strt, ch, i);
	if (mine == official)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");

	
	printf("Testing Memcmp!\n\n");
	printf("%d = mine\n", ft_memcmp(str, str2, 5)); 
	printf("%d = official", memcmp(strt, str2t, 5));

	

	printf(" Testing strnstr!\n\n");
	printf("%s - only My.Code should appear\n", ft_strnstr(s, s1, 15));

	printf("testing atoi!\n\n");
	minei = ft_atoi(atoim);
	offi = atoi(atoit);
	if (minei == offi)
                printf("it is correct\n\n");
        else
                printf("wrong\n\n");

*/
}
