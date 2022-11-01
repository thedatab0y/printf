# printf
Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.

va_start(va_list ap, argN)	
This enables access to variadic function arguments.

where *va_list* will be the pointer to the last fixed argument in the variadic function
*argN* is the last fixed argument in the variadic function. 


