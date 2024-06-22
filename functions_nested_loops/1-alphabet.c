#include <stdio.h>

void print_alphabet(void) 
{
    char letter = 'a';

    while (letter <= 'z') 
    {
        _putchar(letter);
        letter++;
    }
    
    _putchar('\n');  // Print a newline after printing the alphabet
}

int main() 
{
    print_alphabet();  // Call the function to test it
    return 0;
}
