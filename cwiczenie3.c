#include <stdio.h>
int main(void)  /*cwiczenie 3*/

{ 
    int wiek_w_latach = 23;
    int dni_w_roku = 365;   
    int wiek_w_dniach;

    wiek_w_dniach = wiek_w_latach * dni_w_roku;

    printf("Moj wiek w dniach: %d\n", wiek_w_dniach);

    return 0;
}
