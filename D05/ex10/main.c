#include "ft_strcapitalize.c"
#include <stdio.h>

int main()
{
	char a[] = "hEY, coAment tu vas? 42mots quARante-deux; cinguante+et+un";
	printf("%s\n", ft_strcapitalize(a));

	char b[] = "    q   ";
	printf("%s\n", ft_strcapitalize(b));
	return (0);
}
