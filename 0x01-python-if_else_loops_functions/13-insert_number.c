#include "lists.h"

/**
* insert_node - function in C that inserts a number into
* a sorted singly linked list
*
* @head: pointer to head node
* @number: value to be inserted
* Return: address of new node or NULL on failure
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = number;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else if (number <= (*head)->n)
	{
		newnode->n = number;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL && number > temp->next->n)
		{
			temp = temp->next;
		}
		newnode->n = number;
		newnode->next = temp->next;
		temp->next = newnode;
		return (newnode);
	}
	return (NULL);
}
