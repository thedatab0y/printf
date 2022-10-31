#include "ft_printf.h"

int main(void)
{
	int *p;


	printf("------------------\n");
	ft_printf("1. I am printing the output of a character:%c\n",'x');
	ft_printf("2. Printing string output: %s\n", "This is a string");
	ft_printf("3.Printing integer output:%i\n", 11);
	ft_printf("4.-----Printing unsigned int output %u\n", 19);
	ft_printf("5.-----Printing lower case hexadecimal output %x\n", 'a');
	ft_printf("6.-----Printing upper case hexadecima output %X\n", 'A');
	ft_printf("7.Printing decimal output %d\n", 3);
	ft_printf("8.I am printing the output of a pointer:%p\n",&p);
	ft_printf("Printing percentage output %%\n");

	printf("-------------------\n");
	printf("1) I am printing the output of a character:%c\n",'x');
	printf("2) Printing string output: %s\n", "This is a string");
	printf("3)Printing integer output:%i\n", 11);
	printf("4)Printing unsigned int output %u\n", 19);
	printf("5)Printing lower case hexadecimal output %x\n", 'a');
	printf("6)Printing upper case hexadecima output %X\n", 'A');
	printf("7)Printing decimal output %d\n", 3);
	printf("8)I am printing the output of a pointer:%p\n",&p);
	printf("Printing percentage output %%\n");
	return(0);
}