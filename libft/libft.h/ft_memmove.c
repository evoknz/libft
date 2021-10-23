#include <stdio.h>

void *ft_memmove (void *dst, const void *src, size_t len)
//Cette fonction permet de copier un bloc de memoire specifie par le parametre source dans un nouvel emplacement
//designe par le parametre destination. On peut donc dire que cette fonction est proche de la fonction memcpy. Neanmoins, la difference reside dans le fait que la fonction memmove accepte que les deux zones de memoires puissent se chevaucher.
//En cas de chevauchement, la copie se passe comme si les octets de la zone source etaient d'abord copies dans une zone temporaire, qui ne chevauche aucune des deux zones pointees par source et destination, les octets sont ensuite copies de la zone 
//temporaire vers la zone de destination.
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}

int main()
{
	unsigned char src [] = {"ABCDEF"};
	ft_memmove(src+2, src, 2);
	printf("%s", src);
}
