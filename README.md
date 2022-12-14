# Monty Project

![Monty](https://miro.medium.com/max/1000/0*-y92CX3NIm9SkYSx.png)

Monty is a simple stack-based interpreter for the Monty bytecode language. It uses a single stack to hold int values and supports a small set of commands for manipulating the stack.

## Resources
#### Read or watch:
- [Google](https://www.google.com/webhp?q=stack%20and%20queue)
- [How Do I Use Extern To Share Variables Between Source Files In C ?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)

## Usage and Commands
To use the Monty interpreter, run the monty program with the name of a Monty bytecode file as a command-line argument:

## Requirements
> All files were created and compiled on `Ubuntu 20.04 LTS` using `GCC`, using the options `-Wall -Werror -Wextra -pedantic`

## Installation
To install our `Monty program`, you have to clone our repository:

    $ git clone https://github.com/MathieuMorel62/holbertonschool-monty.git

## Compilation
Your program will be compiled this way:

    $ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

And your program will be executable this way:

    $ ./monty

## Quick Example
```c
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

| Files Name     | Description | Usage |                                                                                                                     
|:----------:|:-------------:|:----------:|
| [`push.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/push.c)| Pushes an element to the stack | push |                                                                                          
| [`pall.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pall.c)| Prints all the values on the stack, starting from the top of the stack. | pall |                                                                                      
| [`pint.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pint.c)| Prints the value at the top of the stack, followed by a new line. | pint |                                                                          
| [`pop.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pop.c)| Removes the top element of the stack. | pop |                                                                                      
| [`swap.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/swap.c)| Swaps the top two elements of the stack | swap |                                                                                          
| [`add.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/add.c)| Adds the top two elements of the stack. | add |                                                                                           
| [`nop.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/nop.c)| Doesn’t do anything. | nop |                                                                                   
| [`sub.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/sub.c)| Subtracts the top element of the stack | sub |
| [`div.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/div.c)| Divides the second top element of the stack | div |
| [`mul.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/mul.c)| Multiplies the second top element of the stack | mul |
| [`mod.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/mod.c)| Computes the rest of the division of the second top element of the stack | mod |
| [`pchar.c`](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pchar.c)| Prints the char at the top of the stack | pchar |

## Error

If the Monty interpreter encounters an error, it will print an error message and exit with a non-zero exit code. Some possible error cases include:

  - Incorrect number of arguments: USAGE: monty file
  - Cannot open file: Error: Can't open file <file>
  - Unknown instruction: L<line>: unknown instruction <instruction>


##   Flowchart
![Alt text](https://i.imgur.com/QlXNCZu.png)
----------------------------
  
# Task To Realize The Monty Project

### [0. Push,](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/push.c) [Pall](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pall.c)

Implement the `push` and `pall` opcodes.

**The push opcode**

The opcode `push` pushes an element to the stack.

- Usage: `push <int>`
  - where `<int>` is an integer
- if `<int>` is not an integer or if there is no argument given to `push`, print the error message `L<line_number>: usage: push integer`, followed by a new line, and exit with the status `EXIT_FAILURE`
  - where is the line number in the file
- You won’t have to deal with overflows. Use the `atoi` function

**The pall opcode**

The opcode `pall` prints all the values on the stack, starting from the top of the stack.

- Usage `pall`
- Format: see example
- If the stack is empty, don’t print anything
```
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```
--------------------------
### [1. Pint](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pint.c)

Implement the `pint` opcode.

**The pint opcode**

The opcode `pint` prints the value at the top of the stack, followed by a new line.

- Usage: `pint`
- If the stack is empty, print the error message `L<line_number>: can't pint, stack empty`, followed by a new line, and exit with the status `EXIT_FAILURE`
```  
julien@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes/06.m 
1
2
3
julien@ubuntu:~/monty$ 
```
----------------------------------------

### [2. Pop](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/pop.c)

Implement the `pop` opcode.

**The pop opcode**

The opcode `pop` removes the top element of the stack.

- Usage: `pop`
- If the stack is empty, print the error message `L<line_number>: can't pop an empty stack`, followed by a new line, and exit with the status `EXIT_FAILURE`
```
julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/monty$ ./monty bytecodes/07.m 
3
2
1
2
1
1
julien@ubuntu:~/monty$ 
```
--------------------------

### [3. Swap](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/swap.c)

Implement the `swap` opcode.

**The swap opcode**

The opcode `swap` swaps the top two elements of the stack.

- Usage: `swap`
- If the stack contains less than two elements, print the error message `L<line_number>: can't swap, stack too short`, followed by a new line, and exit with the status `EXIT_FAILURE`
```
julien@ubuntu:~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
julien@ubuntu:~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/monty$
```
------------------------

### [4. Add](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/add.c)

Implement the add opcode.

**The add opcode**

The opcode `add` adds the top two elements of the stack.

- Usage: `add`
- If the stack contains less than two elements, print the error message `L<line_number>: can't add, stack too short`, followed by a new line, and exit with the status `EXIT_FAILURE`
- The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
  - The top element of the stack contains the result
  - The stack is one element shorter
```
julien@ubuntu:~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

julien@ubuntu:~/monty$ ./monty bytecodes/12.m 
3
2
1
5
1
julien@ubuntu:~/monty$
``` 
-------------------------
  
### [5. Nop](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/nop.c)

Implement the `nop` opcode.

**The nop opcode**

The opcode `nop` doesn’t do anything.

- Usage: `nop`
  
----------------------------

### [6. Sub](https://github.com/MathieuMorel62/holbertonschool-monty/blob/main/sub.c)

Implement the `sub` opcode.

**The sub opcode**

The opcode `sub` subtracts the top element of the stack from the second top element of the stack.

- Usage: `sub`
- If the stack contains less than two elements, print the error message `L<line_number>: can't sub, stack too short`, followed by a new line, and exit with the status `EXIT_FAILURE`
- The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
  - The top element of the stack contains the result
  - The stack is one element shorter
```
julien@ubuntu:~/monty$ cat bytecodes/19.m 
push 1
push 2
push 10
push 3
sub
pall
julien@ubuntu:~/monty$ ./monty bytecodes/19.m 
7
2
1
julien@ubuntu:~/monty$
```
--------------------------------  
##   Authors

-   Mathieu Morel - [@Github](https://github.com/MathieuMorel62)
-   Alexandre Mary - [@Github](https://github.com/soOwasTaken)
