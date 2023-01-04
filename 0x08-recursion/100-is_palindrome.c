#include "main.h"
#include <ctype.h>
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
		end++;
	end--;

	return (is_palindrome_helper(s, start, end));
}

/**
 * is_palindrome_helper - recursively check if s is a palindrome
 * @s: string to check
 * @start: start index of substring to check
 * @end: end index of substring to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (!isalpha(s[start]) && !isdigit(s[start]))
		return (is_palindrome_helper(s, start + 1, end));
	if (!isalpha(s[end]) && !isdigit(s[end]))
		return (is_palindrome_helper(s, start, end - 1));
	if (tolower(s[start]) != tolower(s[end]))
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
