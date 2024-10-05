#include <stdio.h>

// Deklaracje funkcji
void raz_trzy();
void dwa();

int main() 
{
    // Wyswietlanie frazy "zaczynamy:"
    printf("zaczynamy:\n");
    
    // Wywolanie funkcji raz_trzy
    raz_trzy();
    
    // Wyswietlanie frazy "koniec!"
    printf("koniec!\n");
    
    return 0;
}

// Definicja funkcji raz_trzy
void raz_trzy() 
{
    // Wyswietlanie słowa "raz"
    printf("raz\n");
    
    // Wywolanie funkcji dwa
    dwa();
    
    // Wyswietlanie słowa "trzy"
    printf("trzy\n");
}

// Definicja funkcji dwa
void dwa() 
{
    // Wyswietlanie słowa "dwa"
    printf("dwa\n");
}