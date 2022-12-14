

# Monty
Monty is a simple stack-based interpreter for the Monty bytecode language. It uses a single stack to hold int values and supports a small set of commands for manipulating the stack.

## Usage and Commands
To use the Monty interpreter, run the monty program with the name of a Monty bytecode file as a command-line argument:

## Compilation
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
## Quick Example
```
$ cat file.m
push 1
pall

$ ./monty file.m
1

$ cat file.m
push 1
push 2
push 3
pall

$ ./monty file.m
3
2
1

$ cat file.m
push 1
push 2
push 3
pint

$ ./monty file.m
3
```

## Commands

| Files Name     | Description | usage |                                                                                                                     
|----------|-------------|----------|
| [`push.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/push.c)| Pushes an element to the stack | push |                                                                                          
| [`pall.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pall.c)| Prints all the values on the stack, starting from the top of the stack. | pall |                                                                                      
| [`pint.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pint.c)| Prints the value at the top of the stack, followed by a new line. | pint |                                                                          
| [`pop.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pop.c)| Removes the top element of the stack. | pop |                                                                                      
| [`swap.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/swap.c)| Swaps the top two elements of the stack | swap |                                                                                          
| [`add.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/add.c)| Adds the top two elements of the stack. | add |                                                                                           
| [`nop.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/nop.c)| Doesn’t do anything. | nop |                                                                                   
| [`sub.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/sub.c)| Subtracts the top element of the stack | sub |

## Errors

If the Monty interpreter encounters an error, it will print an error message and exit with a non-zero exit code. Some possible error cases include:

  - Incorrect number of arguments: USAGE: monty file
  - Cannot open file: Error: Can't open file <file>
  - Unknown instruction: L<line>: unknown instruction <instruction>


##   Flowchart
![Alt text](https://i.imgur.com/QlXNCZu.png)
  
##   Authors

-   Mathieu Morel

-   Alexandre Mary
