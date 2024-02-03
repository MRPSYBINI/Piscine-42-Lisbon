#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i = 0;

	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
int	main()
{
	char	str[] = "istoeumteste";
	char	str2[] = "Istoeumteste";
	char	str3[] = "isto e um teste";

	printf("%d\n", ft_str_is_lowercase(str));
	printf("\n%d", ft_str_is_lowercase(str2));
	printf("\n%d", ft_str_is_lowercase(str3));
}
