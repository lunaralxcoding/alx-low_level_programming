#include<stdio.h>
/**
 * main - A program that prints the numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
{
	putchar(alp[i]);
}
	putchar('\n');
	
	return (0);
}
