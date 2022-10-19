#include <stdio.h>
/**
 * main - Entry point / start of code
 * Return: Always 0 (success)
 */
int main(void)
{
	
char *sh = "_putchar";
while (*sh)
{
	putchar(*sh);
	sh++;
}
putchar('\n');
return (0);
}
