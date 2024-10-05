#include <stdio.h>

// Funkcja wyswietlajaca "Panie Janie !"
void wyswietlPanieJanie()
{
    printf("Panie Janie !\n");
    
}

// Funkcja wyświetlająca "Rano wstan !"
void wyswietlRanoWstan()
{

printf("Rano wstan !"); 

}

int main() /*cwiczenie 4*/ 
{
    // Wywołanie funkcji dwukrotnie, by wyświetlić "Panie Janie !" dwa razy
    wyswietlPanieJanie();
    wyswietlPanieJanie();

// Wywołanie funkcji, by wyświetlić "Rano wstan !"
    wyswietlRanoWstan();

    return 0;
}