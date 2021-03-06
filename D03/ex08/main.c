#include <stdio.h>
#include "ft_atoi.c"

int main()
{
	printf("%d\n", ft_atoi("02147483646"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("a12"));
	printf("%d\n", ft_atoi("\t 21u"));
	printf("%d\n", ft_atoi(" \v-12"));
	printf("%d\n", ft_atoi("-1-12"));
	printf("%d\n", ft_atoi("--12"));
	printf("%d\n", ft_atoi("-+12"));
	printf("%d\n", ft_atoi("+12"));
	return (0);
}
