# How Strings are Stored in C

- C doesn't support Strings directly however there are external libraries that
can be used

- Therefore, C uses character arrays to store strings indexed from `0`

- Arrays are stored in a continuous manner where the first value is stored at
the starting address

- The index of an element is its *offset* from the start of the array

## Writing Strings

- You can declare a string using the following two ways:

```C
s = "literal";
s = {'l', 'i', 't', 'e', 'r', 'a', 'l'};
```

- The difference is the former is a *string literal*, which are constants

## Reading Strings

- C may or may not figure out the *exactly* how long an array is

- Therefore, to display them, it needs to know when they end

- We do this by adding a **sentinel character**, which is an additional character
at the end of the string

- The sentinel character contains `\0` which represents a `null` value

- This is why the `card_name` in [cards.c](cards.c) has a size of `3` instead of
`2`
