#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_char - print char
* @args: arguments
**/

void print_char(va_list vargs)
{
printf("%c", va_arg(vargs, int));
}

/**
* print_integer - prints an integer
* @vargs: argument
**/
void print_integer(va_list vargs)
{
printf("%d", va_arg(vargs, int));
}

/**
* print_float - prints a float
* @vargs: argument
**/
void print_float(va_list vargs)
{
printf("%f", va_arg(vargs, double));
}

/**
* print_string - prints a string
* @vargs: argument
**/
void print_string(va_list vargs)
{
char *ch;
ch = va_arg(vargs, char *);
if (ch == NULL)
{
printf("(nil)");
return;
}
printf("%s", ch);
}

/**
* print_all - a function prints all arguments
* @format: list of format
**/

void print_all(const char * const format, ...)
{
int i, j;
char *str = "";
va_list args;

frm_t y[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string},
{NULL, NULL},
};


va_start(args, format);

i = 0;
while (format && format[i])
{
j = 0;
while (y[j].p)
{
if (*(y[j].p) == format[i])
{
printf("%s", str);
y[j].func(args);
str = ", ";
}
j++;
}
i++;
}

va_end(args);
printf("\n");
}
