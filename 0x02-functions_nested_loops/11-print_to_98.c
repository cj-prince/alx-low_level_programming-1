#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing a number starting from n to 98
 * @n: input integer argument 
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98){
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d ,", i);
			}
			else{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d ,", i);
			}
			else{
				printf("%d", i);
			}
		}
	}
	_putchar('\n');
}
