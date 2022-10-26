#include "main.h"

/**
 * count - A function to count the strings in each variable
 *
 * @ptr: Pointer variable to hold pointer address
 *
 * Return: Exit with count
 */

int count(char *ptr);


/**
 * _strcmp - Write a function that compares two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Exit with a value < 0 if s1<s2, value > 0 if s1>s2 and
 * value = 0 if s1=s2
 */

int _strcmp(char *s1, char *s2)
{
	int s1_length, s2_length;

	s1_length = count(s1);
	s2_length = count(s2);


	if (s1_length > s2_length)
	{
		return (15);
	}
	else if (s2_length > s1_length)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}

/**
 * count - A function to count the strings in each variable
 * @ptr: Check above for detail
 * Return: Info above 
 */

int count(char *ptr)
{
	int  i;

	for (i = 0; ptr[i] != '\0'; i++)
		;

	return (i);
}
