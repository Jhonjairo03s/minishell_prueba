#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	main(void)
{
	char	*str;

	str = "Simulamos el pwd\n",
	write(1, str, ft_strlen(str) + 1);
	return (0);
}
