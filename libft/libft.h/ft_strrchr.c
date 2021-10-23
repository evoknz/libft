#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
//The strrchr function locates the last occurence of c (converted to a char) in the string pointed to by s. The terminating null character
//is considered to be part of the string, therefore if c is \0, the functions locate the terminating \0
{
	int	i;
	char *str;

	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == c)
			return (str + i);
		i--;
	}
	return (0);
}
/*int	main()
{
	char test [] = "Bonjour je m appelle arthur";
	int	bite = 'a';
	printf("%s",ft_strrchr(test, bite));
} */
