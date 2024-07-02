# Introduction to Functions

- Functions are just a piece of code that runs together and can be given an input
and return an output

```C
int larger(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
```

- Functions uses *arguments* for inputs and and *return value* for output

```C
void hello()
{
    puts("Hello World!");
}
```

- `void` is used as a return type for a function that doesn't return anything
