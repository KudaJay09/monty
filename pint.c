#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * @head: the head of the stack
 * @counter: line number
 *
 * Return: void
 */
void f_pint(stack_t **head, unsigned int number)
{
	if (*head == NULL)
	{
		fprint(stderr, "L%u: can't pint, stack empty", counter);
		fclose(bus.file);
		free(buss.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("d%\n", (head)->n);
}
