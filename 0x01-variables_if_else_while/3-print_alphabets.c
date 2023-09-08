#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet
 *
 * Description: a program that prints the
 * alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
