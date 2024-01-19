#include "monty.h"

/*
 * pall - Print all the values on the stack, starting from the top.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number or counter associated with the operation.
 *
 * This function prints all the integer values stored in the stack, starting
 * from the top. If the stack is empty, the function does nothing. It iterates
 * through the stack and prints each value on a new line.
 *
 * Return: No explicit return value. The function prints the stack content.
 */
void pall(stack_t **head, unsigned int line_number)
{
    stack_t *current = *head;

    if (current == NULL) {
        return;
    }

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }
}
