/*
 * File: 3-strcmp.c
 * Auth: Zakari Usman
 */

#include "main.h"

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
