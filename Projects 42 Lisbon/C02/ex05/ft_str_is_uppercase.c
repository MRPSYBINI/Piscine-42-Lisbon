#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i = 0;

	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[] = "ISTOEUMTESTE";
	char	str2[] = "istoeumteste";
	char	str3[] = "isto e um teste";
	char	str4[] = "ISTO E UM TESTE";
	char	str5[] = "";

	printf("%d\n", ft_str_is_uppercase(str));
	printf("\n%d", ft_str_is_uppercase(str2));
	printf("\n%d", ft_str_is_uppercase(str3));
	printf("\n%d", ft_str_is_uppercase(str4));
	printf("\n%d", ft_str_is_uppercase(str5));
}
