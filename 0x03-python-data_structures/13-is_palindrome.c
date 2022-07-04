#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"


/**
 * is_palindrome - check if linked list is a palindrome
 *
 * @head: pointer to pointer to head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	return (checkPalindrome(head, *head));
}

/**
  * checkPalindrome - recursive function ot check if sinly linked list
  * is a palindrome.
  * @headptr: double pointer to list.
  * @tptr: pointer to list.
  *
  * Return: 1 or 0
  */
int checkPalindrome(listint_t **headptr, listint_t *tptr)
{
	int res;

	/* base case */
	if (tptr == NULL)
		return (1);
	res = checkPalindrome(headptr, tptr->next) && ((*headptr)->n == tptr->n);
	return (res);
}

