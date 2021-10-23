#include <stdio.h>
char   *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
     size_t i;
     size_t j;
     if (*needle == '\0' || needle == NULL)
         return ((char *)haystack);
     i = 0;
     while (haystack[i] && i < len)
     {
         j = 0;
         while (needle[j] == haystack[i + j] && i + j < len)
         {
             printf("needle[j] = %c\n", needle[j]);
             printf("haystack[i + j] = %c\n", haystack[i + j]);
             printf("i + j = %lu\n", i + j);
             if (needle[j + 1] == '\0')
                 return ((char *)haystack + i);
             j++;
         }
         i++;
     }
     return (NULL);
}
int main(int ac, char **av)
{
        if (ac > 2)
        {
                printf("%s\n", ft_strnstr(av[1], av[2], 10));
        }
        return (0);
}
