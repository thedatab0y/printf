#include "ft_printf.h"

int main(void)
{
	printf("------------------\n");
	//ft_printf("I am printing the output of a pointer:%p\n",p);
	ft_printf("1. I am printing the output of a character:%c\n",'x');
	ft_printf("2. Printing string output: %s\n", "This is a string");
	//ft_printf("Printing decimal output %d\n", 3);
	ft_printf("3.Printing integer output:%i\n", 11);
	ft_printf("4Printing unsigned int output %u\n", 19);
	//ft_printf("Printing lower case hexadecimal output %x\n", "a");
	//ft_printf("Printing upper case hexadecima output %X\n", "A");
	//ft_printf("Printing percentage output %%");

	printf("-------------------\n");
	printf("1) I am printing the output of a character:%c\n",'x');
	printf("2) Printing string output: %s\n", "This is a string");
	printf("3)Printing integer output:%i\n", 11);
	printf("4)Printing unsigned int output %u\n", 19);
	return(0);
}
