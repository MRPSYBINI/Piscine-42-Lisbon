#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i = 0;
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
	
			dest[i] = '\0';
			i++;
		}
		return dest;

	}
}

int	main()
{
	char	src[] = "Isto e um teste by MRBINI";
	char	src2[] = "Portugal";
	char	src3[] = "Born to Code";
	char	dest[30] = "";
	char	dest2[10] = "";
	char	dest3[16] = "";

	printf("\n%s", ft_strncpy(dest, src, 30));
	printf("\n%s", ft_strncpy(dest2, src2, 10));
	printf("\n%s", ft_strncpy(dest3, src3, 15));
}
