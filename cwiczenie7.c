#include <stdio.h>

// Definicja funkcji, ktora wyswietla tekst "Usmiech!"
void wyswietlUsmiech() 
{
    printf("Usmiech!");
}

int main() 
{
    // Pierwsza linia: Usmiech!Usmiech!Usmiech!
    wyswietlUsmiech();
    wyswietlUsmiech();
    wyswietlUsmiech();
    printf("\n");  // Nowa linia

    // Druga linia: Usmiech!Usmiech!
    wyswietlUsmiech();
    wyswietlUsmiech();
    printf("\n");  // Nowa linia

    // Trzecia linia: Usmiech!
    wyswietlUsmiech();
    printf("\n");  // Nowa linia

    return 0;
}