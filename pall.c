#include "monty.h"

/**
 * pall - prints the stack
 * @stack: pointer to stack
 * @line_cnt: number of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
