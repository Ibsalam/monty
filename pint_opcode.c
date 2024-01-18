#include "monty.h"

/*
 * pint - Print the value at the top of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number or counter associated with the operation.
 *
 * This function prints the integer value at the top of the stack. If the
 * stack is empty, an error message is printed to stderr, and the program
 * exits with failure status. Otherwise, the value is printed followed by
 * a newline character.
 *
 * Return: No explicit return value. The function prints the top of the stack.
 */
void pint(stack_t **head, unsigned int line_number)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*head)->n);
}
