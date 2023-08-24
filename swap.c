#include "monty.h"
/**
 * swap - Swaps the top two value elements of stack.
 * @stack: A pointer to the stack.
 * @line_number: The current working line number.
 */
void swap(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp;

        if ((*stack)->next == NULL || (*stack)->next->next == NULL)
        {
                set_op_tok_error(short_stack_error(line_number, "swap"));
                return;
        }

        tmp = (*stack)->next->next;
        (*stack)->next->next = tmp->next;
        (*stack)->next->prev = tmp;
        if (tmp->next)
                tmp->next->prev = (*stack)->next;
        tmp->next = (*stack)->next;
        tmp->prev = *stack;
        (*stack)->next = tmp;
}
