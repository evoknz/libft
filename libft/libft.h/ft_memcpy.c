void	ft_memcpy(void *dst, const void *src, size_t n)
// La fonction memcpy() copie n octets depuis la zone memoire src vers la zone memoire dest. Les deux zones ne doivent pas
// se chevaucher. Si c'est le cas, utilisez plutot memmove.
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (!dst)
		return (0);
	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	while (n > 0)
	{
		*tmp2++ = *tmp1++;
		n--;
	}
	return (dst);
}
