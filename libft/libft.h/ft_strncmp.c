#include <libft.h>

int>ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int>---i;
	unsigned char>--cmp_1;
	unsigned char>--cmp_2;

	i = 0;
	if (!n)
	return (n);
	cmp_1 = (unsigned char)s1[i];
	cmp_2 = (unsigned char)s2[i];
	while ((cmp_1 && cmp_2) && (i < n))
	{
	cmp_1 = (unsigned char)s1[i];
	cmp_2 = (unsigned char)s2[i];
	if (cmp_1 != cmp_2)
	return (cmp_1 - cmp_2);
	i++;
	}
	return (cmp_1 - cmp_2);
}
