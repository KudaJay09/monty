#include "monty.h"
/**
 * add - Adds the top two values of a stack_t linked list.
 * @stack: A pointer to stack
 * @line_number: The current working line number.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	pop(stack, line_number);
}

/**
 * sub - Subtracts the second value from the top
 * @stack: A pointer to the stack
 * @line_number: The current working line number.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "sub"));
		return;
	}

	(*stack)->next->next->n -= (*stack)->next->n;
	pop(stack, line_number);
}

/**
 * div - Divides the second value from the top
 * @stack: A pointer to the stack.
 * @line_number: The current working line number.
 */
void div(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "div"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}

	(*stack)->next->next->n /= (*stack)->next->n;
	pop(stack, line_number);
}

/**
 * mul - Multiplies the second value from the top
 * @stack: A pointer to the stack
 * @line_number: The current working line number.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mul"));
		return;
	}

	(*stack)->next->next->n *= (*stack)->next->n;
	pop(stack, line_number);
}

/**
 * mod - Computes the modulus of the second value from the
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mod"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}

	(*stack)->next->next->n %= (*stack)->next->n;
	pop(stack, line_number);
}
