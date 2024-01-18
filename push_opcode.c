#include "monty.h"

/*
 * push - Adds a new node to the top of the stack.
 * @head: Pointer to the pointer of the stack's head.
 * @line_number: Unsigned integer representing line number or counter.
 */
void push(stack_t **head, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
	    if(new_node == NULL)
	    {
		    fprintf(stderr, "Error: malloc failed\n");
		    exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->next = *head;
    *head = new_node;
    new_node->prev = NULL;

    if(*head != NULL)
    {
	    (*head)->prev = new_node;
    }
}

if(strcmp(opcode, "push") == 0)
{
	if (argc != 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
	}

        int value = atoi(argv[1]);
        push(&stack_head, value, line_number);
    } else
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
    }
