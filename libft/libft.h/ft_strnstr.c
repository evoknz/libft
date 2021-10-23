char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//The strnstr() function locates the first occurence of the null terminated string needle in the string
// haystack, where not more than len characters are searched. characters that appear after a \0 
// character are not searched. Since the strnstr() function is a FreeBSD specific API, it 
// should only be used zhen portability is not a concern. If needle is an empty string, haystack
// is returned, if needle occurs nowhere in haystack, NULL is returned. Otherwise a pointer
// to the first character of the first occurence of needle is returned.
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j+i] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
