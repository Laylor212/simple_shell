/*
 * File: linkedlist.c
 * Auth: Mark Oladeinde 
 * & Anela Made
 */

#include "main.h"

alias_t *add_alias_end(alias_t **head, char *name, char *value);
void free_alias_list(alias_t *head);
list_t *add_node_end(list_t **head, char *dir);
void free_list(list_t *head);

/**
 * add_list_end - adds a note to the end of a alias_t linked list
 * @head: a pointer to the head of the list_t list
 * @name: the name of the new alias to be added
 * @value: the value of the new alias to be added
 *
 * Return: if an error occurs - NULL
 * otherwise _ a pointer to the new node
 */
alias_t *add_alias_end(alias_t **head, char *name, char *value)
{
	alias_t *new_node = malloc(sizeof(alias_t));
	alias_t *last;

	if (!new_node)
		return (NULL);
	
	new_node->next = NULL;
	new_node->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_node->name)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = value;
	_strcpy(new_node->name, name);

	if (*head)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	else
	*head = new_node;

	return (new_node);
}

/**
 * add_node_end - adds a node to the end of the list_t linked list
 * @head: a pointer to the head of the list_t list
 * @dir: the directory path to the new node container
 *
 * Return: if error occurs - NULL
 * otherwise - a pointer to the new node
 */
list_t *add_node_end(list_t **head, char *dir)
{ 
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last;

	if (!new_node)
		return (NULL);
	
	new_node->dir = dir;
	new_node->next = NULL;

	if (*head)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	else
	*head = new_node;
	
	return (new_node);
}

/**
 * free_alias_list - frees a alias_t linked list
 * @head: the head of the aliast_t list
 */
void free_alias_list(alias_t *head)
{
	alias_t *next;
	
	while (head)
	{
		next = head->next;
		free(head->name);
		free(head->value);
		free(head);
		head = next;
	}
}

/**
 * free_list - frees a list_t linked list
 * @head: the head of the list_t list
 */
void free_list(list_t *head)
{
	list_t *next;
	
	while (head)
	{
		next = head->next;
		free(head->dir);
		free(head);
		head = next;
	}
}
