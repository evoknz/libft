size_t	ft_strlcpy(char *dst, const char *src, size_t size)
/*The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as
snprintf(3).  They are designed to be safer, more consistent, and less error prone replacements for the easily misused func-
tions strncpy(3) and strncat(3).*/
{

	size_t	i;

	i = 0;
	if (size_t > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
