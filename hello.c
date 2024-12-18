#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    // Il valore di ritorno della funzione
    return 1 - a; // La porta NOT inverte il valore (0 -> 1, 1 -> 0)
}

// Funzione per simulare la porta AND
int AND(int a, int b) {
    // La porta AND restituisce 1 solo se entrambi i valori sono 1, altrimenti restituisce 0
    return a && b;
}

// Funzione per simulare la porta OR
int OR(int a, int b) {
    // La porta OR restituisce 1 se almeno uno dei due valori è 1
    return a || b;
}

int main() {
    int A, B;
    printf("Inserisci il valore di A (0 o 1):\n");
    scanf("%d", &A);
    printf("Hai inserito il valore A: %d\n", A);
    printf("Inserisci il valore di B (0 o 1):\n");
    scanf("%d", &B);
    printf("Hai inserito il valore B: %d\n", B);
    if ((A != 0 && A != 1) || (B != 0 && B != 1)) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        printf("I valori inseriti sono 1 o 0\n");
        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);
        printf("I valori di A e B vengono trasformati da una porta AND\n");
        int andAB = AND(A, B);
        printf("Il valore di uscita della porta AND è: %d\n", andAB);
        printf("I valori di A e B vengono trasformati da una porta OR\n");
        int orAB = OR(A, B);
        printf("Il valore di uscita della porta OR è: %d\n", orAB);
    }

    return 0;
}