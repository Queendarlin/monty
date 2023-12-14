# Monty Language Interpreter (Version 0.98) ALX Group Project - README
The Monty Language Interpreter, version 0.98, is a powerful scripting language with a stack-based execution model. This README provides comprehensive information on how to use the Monty Interpreter and its various opcode implementations.
## Usage
To run the Monty Interpreter, use the following command:
`$ monty file `
Where the file is the path to the file containing Monty byte code.
## Error Handling
If no file or more than one argument is provided, the program will print the following error message and exit with the status EXIT_FAILURE:
If the specified file cannot be opened, the program will print the following error message, including the name of the file, and exit with the status EXIT_FAILURE:
`Error: Can't open file <file>`
If the file contains an invalid instruction, the program will print the following error message, indicating the line number and the unknown opcode, and exit with the status EXIT_FAILURE:
`L<line_number>: unknown instruction <opcode>` 
## Implemented Opcodes
### push
The push opcode pushes an element onto the stack.
Usage: push <int>
If <int> is not an integer or no argument is given, an error is displayed:
`L<line_number>: usage: push integer` 
### pall
The pall opcode prints all values on the stack.
Usage: pall
If the stack is empty, nothing is printed.
### pint
The pint opcode prints the value at the top of the stack.
Usage: pint
If the stack is empty, an error is displayed:
`L<line_number>: can't pint, stack empty`
### pop
The pop opcode removes the top element from the stack.
Usage: pop
If the stack is empty, an error is displayed:
`L<line_number>: can't pop an empty stack` 
### swap
The swap opcode swaps the top two elements of the stack.
Usage: swap
If the stack contains less than two elements, an error is displayed:
`L<line_number>: can't swap, stack too short`
### add
The add opcode adds the top two elements of the stack.
Usage: add
If the stack contains less than two elements, an error is displayed:
`L<line_number>: can't add, stack too short` 
The result is stored in the second top element of the stack, and the top element is removed.
### nop
The nop opcode does nothing.
Usage: nop
### sub
The sub opcode subtracts the top element from the second top element.
Usage: sub
If the stack contains less than two elements, an error is displayed:
`L<line_number>: can't sub, stack too short` 
The result is stored in the second top element of the stack, and the top element is removed.
### div
The div opcode divides the second top element by the top element.
Usage: div
If the stack contains less than two elements, an error is displayed:
`L<line_number>: can't div, stack too short`
If the top element is 0, an error is displayed:
`L<line_number>: division by zero`
### mul
The mul opcode multiplies the second top element by the top element.
Usage: mul
If the stack contains less than two elements, an error is displayed:
`L<line_number>: can't mul, stack too short` 
The result is stored in the second top element of the stack, and the top element is removed.
### mod
The mod opcode computes the remainder of the division of the second top element by the top element.
Usage: mod
If the stack contains less than two elements, an error is displayed:
`L<line_number>: can't mod, stack too short`
If the top element is 0, an error is displayed:
`L<line_number>: division by zero`
### pchar
The pchar opcode prints the character at the top of the stack.
Usage: pchar
If the stack is empty, an error is displayed:
`L<line_number>: can't pchar, stack empty`
If the value is not in the ASCII table, an error is displayed:
`L<line_number>: can't pchar, value out of range` 
### pstr
The pstr opcode prints the string starting at the top of the stack.
Usage: pstr
The integer stored in each stack element is treated as the ASCII value of the character to be printed.
The string stops when the stack is empty, the value is 0, or the value is not in the ASCII table.
### rotl
The rotl opcode rotates the stack to the top.
Usage: rotl
The top element of the stack becomes the last one, and the second top element becomes the first one.
### rotr
The rotr opcode rotates the stack to the bottom.
Usage: rotr
The last element of the stack becomes the top element.
### stack
The stack opcode sets the data format to a stack (LIFO), the default behavior.
Usage: stack
### queue
The queue opcode sets the data format to a queue (FIFO).
Usage: queue
When switching mode, the top of the stack becomes the front of the queue, and the front of the queue becomes the top of the stack.
