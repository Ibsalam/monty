#include "monty.h"

/*
 * push - Adds a new node to the top of the stack.
 * @head: Pointer to the pointer of the stack's head.
 * @line_number: Unsigned integer representing line number or counter.
 */
void push(stack_t **head, int n, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
	    if(new_node == NULL)
	    {
		    fprintf(stderr, "Error: malloc failed\n");
		    exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;
    new_node->prev = NULL;

    if(*head != NULL)
    {
	    (*head)->prev = new_node;
    }
}
