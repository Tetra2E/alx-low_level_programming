#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
variadic_functions.h va_list nums;
variadic_functions.h unsigned int index, sum = 0;

variadic_functions.h va_start(nums, n);

variadic_functions.h for (index = 0; index < n; index++)
variadic_functions.h variadic_functions.h sum += va_arg(nums, int);

variadic_functions.h va_end(nums);

variadic_functions.h return (sum);
}
