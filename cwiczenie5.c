#include <stdio.h>

// Funkcja wyswietlajaca "Brazylia, Rosja"
void br() 
{
    printf("Brazylia, Rosja");
}

// Funkcja wyswietlajaca "Indie, Chiny"
void ic() 
{
    printf("Indie, Chiny");
}

int main() 
{
    // Wyswietlenie "Brazylia, Rosja, Indie, Chiny"
    br();
    printf(", ");
    ic();
    printf("\n");

    // Wyswietlenie "Indie, Chiny"
    ic();
    printf("\n");

    // Wyswietlenie "Brazylia, Rosja"
    br();
    printf("\n");

    return 0;
}
