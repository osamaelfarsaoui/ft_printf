#include "libftprintf.h"
#include <stdio.h>

int main()
{
	close(1);
	//printf("value %d\n", ft_number(1222));
	//printf("Value %d\n", printf("Hello %c\n", 'c'));
	printf("%p\n", NULL);
}