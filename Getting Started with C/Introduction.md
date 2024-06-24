# Introduction to C

- C programs normally begins with a comment explaining the purpose of the file

```C
/**
 * Purpose of the program along with other information such as
 * license, author, etc.
 */
```

- C is a very small language and almost nothing can be done without the use of
external libraries

```C
#include <stdio.h>
```

- `#include` tells the compiler to the use the following files/libraries

- The `stdio.h` is the standard I/O library of the C language

- When a compiled C file is executed, its `main` function is called

```C
int main()
{
    // Your code goes here
}
```

- If it returns `0`, it means the program was completed successfully

- However, any other return value means an error has occurred

- This function can call any functions, which can also call other functions
