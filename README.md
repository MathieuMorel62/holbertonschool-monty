

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

| Command     | Description                                                                                                            | usage                  |
|-------------|------------------------------------------------------------------------------------------------------------------------|--------------------------
| `push`        | pushes an element to the stack                                                                                          | push <int>        |
| `pall`        | prints all the values on the stack, starting from the top of the stack.                                                                                       | pall |
| `pint`        | prints the value at the top of the stack, followed by a new line.                                                                                   | pint            |
| `pop`        | removes the top element of the stack.                                                                                      | pop        |
| `swap`        | swaps the top two elements of the stack                                                                                            | swap         |
| `add`        | adds the top two elements of the stack.                                                                                            | add         |
| `nop`        | doesn’t do anything.                                                                                            | nop         |

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
