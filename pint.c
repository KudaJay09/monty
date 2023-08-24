#include "monty.c"
/**
 * pint - Prints the top value of stack.
 * @stack: A pointer to the stack.
 * @line_number: The current working line number.
 */
void pint(stack_t **stack, unsigned int line_number)
{
        if ((*stack)->next == NULL)
        {
                set_op_tok_error(pint_error(line_number));
                return;
        }

        printf("%d\n", (*stack)->next->n);
}
