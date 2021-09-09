/**
 * File: 8-rot13.c
 * Auth: Zakari Usman 
 */

#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
#include "main.h"

/**
 * rot13 - encodes a string by rotating the characters 13 spaces.
 * @s: pointer to input string.
 * Return: Returns pointer encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (s);
}
