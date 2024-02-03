#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i = 0;

	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	str[] = "0123456789";
	char	str2[] = "012m3456789";
	char	str3[] = "Code C";
	char	str4[] = "9876543210";

	printf("\n%d", ft_str_is_numeric(str));
	printf("\n%d", ft_str_is_numeric(str2));
	printf("\n%d", ft_str_is_numeric(str3));
	printf("\n%d", ft_str_is_numeric(str4));
}

