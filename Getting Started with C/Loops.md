# Loops in C

- There are three types of loops in C viz. `while`, `do while` and `for`

- Loops checks for a condition, which needs to be true before they run further

- Loops usually comprises of the following four components:

    1. Some work is done before the loop starts like initializing a counter

    2. A condition is checked before every iteration

    3. The body of the loop where work is done

    4. Something at the end of the loop like updating the counter

```C
int i = 1;
while(i < 11)
{
    printf("loop count: %i\n", i);
}
```

- The `while` loop runs as long as the condition is `true` and ends as soon as
it becomes `false`

- It is used when the number of iterations is non-deterministic

```C
int i = 1;
do
{
    printf("loop count: %i\n", i);
}while(i < 10);
```

- The `do while` is the same as `while` except it runs the body before checking
the condition

- It is used when the number of iterations is non-deterministic and the loop must
run at least once

```C
for(int i = 1; i < 11; i++)
{
    printf("loop count: %i\n", i);
}
```

- The `for` loop is the simplest and most used as it also does the pre and post
loop work itself

- It is used when the number of iterations is deterministic

- The `continue` keyword is used to skip the remaining part of the loop for the
current iteration
