void	bzero(void *s, size_t n)
// La fonction bzero() met a 0 (octets contenant "\0") les n premiers octets du bloc pointe par s.
{
	size_t	i;
	unsigned char	*dest;

	if (!b)
		return (0);
	i = 0;
	dest = (unsigned char *)s
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
}
