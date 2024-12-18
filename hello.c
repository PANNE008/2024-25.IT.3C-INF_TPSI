
#include <stdio.h>

int main() {
    int input[6];  
    int result = 1;  

    
    printf("Inserisci 6 valori che siano 0 o 1: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);

        
        if (input[i] != 0 && input[i] != 1) {
            printf("Valore non valido, inserisci 0 o 1.\n");
            return 1;  
        }

      
        if (input[i] == 0) {
            result = 0;
        }
    }

    
    printf("Il risultato del labirinto è: %d\n", result);

    if (result == 1) {
        printf("Labirinto risolto!\n");
    } else {
        printf("Labirinto non risolto.\n");
    }

    return 0;
} 