#include "main.h"
#include <stdio.h>

char *rev_string(char *string, int length, char *new_string, int index);
int _strlen_recursion(char *s);
int compare_strings(char *original, char *new, int index);

/**
 * compare_strings - length of a string
 * @original: string
 * @new: string
 * @index: int
 * Description: compare strings
 * Return: int
 */
int compare_strings(char *original, char *new, int index)
{
	if (original[index])
	{
		if (original[index] != new[index])
			return (0);

		index++;
		return (compare_strings(original, new, index));
	}

	return (1);
}

/**
 * _strlen_recursion - length of a string
 * @s: string
 * Description: get length of a string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len])
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}

/**
 * rev_string - func
 * @string: param 1
 * @length: param 2
 * @new_string: param 3
 * @index: param 4
 * Return: pointer
 */

char *rev_string(char *string, int length, char *new_string, int index)
{
	if (length)
	{
		length--;
		new_string[index] = string[length];
		index++;
		rev_string(string, length, new_string, index);
	}
	return (new_string);
}

/**
 * is_palindrome - do task
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	char new_str[100000] = "";

	if (!*s)
		return (1);

	rev_string(s, _strlen_recursion(s), new_str, 0);
	return (compare_strings(new_str, s, 0));
}

