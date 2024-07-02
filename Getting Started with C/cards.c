/**
 * Program that tells the number of cards based on how many decks you have
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int val = 0;
    int count = 0;
    while (card_name[0] != 'X')
    {
        puts("Enter the card name: ");
        scanf("%2s", card_name);
        switch(card_name[0])
        {
            case 'A': val = 11; break;
            // K and Q will cascade to J
            case 'K':
            case 'Q': 
            case 'J': val = 10; break;
            
            case 'X': continue;

            default: val = atoi(card_name);
            if(val < 1 || val > 10)
            {
                continue;
            }
        }
        if(val > 2 && val < 7)
        {
            count++;
        }
        else if(val == 10)
        {
            count--;
        }
        printf("The count is %i\n", count);
    }
    return 0;
}