# The Switch Statement

- A switch tests a single value for equality against multiple cases as a replacement
for `if-else`

- Once a case is matched, all code following it is ran unless a `break` is encountered

```C
switch (card_name[0])
{
    case 'A': val = 11; break;
    // K and Q will cascade to J
    case 'K':
    case 'Q': 
    case 'J': val = 10; break;
    
    default: val = atoi(card_name[0]);
}
```

- However, `switch` in `C` does not work for strings or arrays of any kind
