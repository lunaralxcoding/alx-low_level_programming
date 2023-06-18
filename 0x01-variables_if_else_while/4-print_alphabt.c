 #include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char alp[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
return (0);
}
