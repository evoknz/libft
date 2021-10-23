unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
//The strlcat function achieves the same goal as the venerable strcat function: to append one string onto the end of the other.
//The problem with strcat however is that a size limitation isnt set for the destination buffer. its quite possible for this buffer to 
//overflow. As a solutionm the strlcat function offers an additional argument, dstsize. This argument sets the length of the destination 
//string effectively equal to its buffer size.
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
		k++;
	if (size - 1 <= i)
		return (k + size);
	while (j < (size - i - 1))
	{
		dest[i + j] = '/0';
		return (k + i);
	}
