#include <stdio.h>
#include "ft_printf.h"
#include <stdint.h>

int main(void)
{
	int *p = NULL;
	printf("%p", p);
	printf("\n");
	ft_printf("%p", p);
	// printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	// printf("f: %d\n", ft_printf("f: %c %s %d %i %u %x %X %p %% \n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	// printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", 'G', "hello", -123, -123, -123, -123, -123, "hello"));
	// printf("f: %d\n", ft_printf("f: %c %s %d %i %u %x %X %p %% \n", 'G', "hello", -123, -123, -123, -123, -123, "hello"));
	// printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", 'G', "hello", INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, "hello"));
	// printf("r: %d\n", ft_printf("r: %c %s %d %i %u %x %X %p %% \n", 'G', "hello", INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, "hello"));
	// printf("r: %d\n", printf("r: %c %s %d %i %u %x %X %p %% \n", 'G', "hello", INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN, "hello"));
	// printf("r: %d\n", ft_printf("r: %c %s %d %i %u %x %X %p %% \n", 'G', "hello", INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN, "hello"));
}