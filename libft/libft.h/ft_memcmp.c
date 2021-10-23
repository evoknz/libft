int	ft_memcmp(const void *s1, const void *s2, size_t n)
// The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2
// The memcmp() function returns an integer less thanm equal to, or greater than zero if the first n bytes of s1 is found.
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t	i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
