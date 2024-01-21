#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *r;
	(void)counter;

	r = *head;
	if (r == NULL)
		return;
	while (r)
	{
		printf("%d\n", r->n);
		r = r->next;
	}
}
