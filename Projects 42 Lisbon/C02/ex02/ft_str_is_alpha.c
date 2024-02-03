#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	i = 0;

	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	char	str[] = "IstoeumtestebyMRBINI";
	char	str2[] = "12345";
	char	str3[] = "Alfabeto";
	char	str4[] = "Umberto";
	char	str5[] = "Umberto Delgado";

	printf("\n%d", ft_str_is_alpha(str));
	printf("\n%d", ft_str_is_alpha(str2));
	printf("\n%d", ft_str_is_alpha(str3));
	printf("\n%d", ft_str_is_alpha(str4));
	printf("\n%d", ft_str_is_alpha(str5));
}
