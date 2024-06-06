#include <stdio.h>
#include <string.h>

void print_menu();
void gioca_partita();

int main() {
    char scelta = '\0';

    while (1) {
        print_menu();
        scanf(" %c", &scelta);

        if (scelta == 'B' || scelta == 'b') {
            printf("Il gioco è finito\n");
            break;
        } else if (scelta == 'A' || scelta == 'a') {
            gioca_partita();
        } else {
            printf("Scelta non valida. Per favore, inserisci A o B.\n");
        }
    }

    return 0;
}

void print_menu() {
    printf("start_menu:\n");
    printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
    printf("Inserisci una lettera che corrisponda alla tua scelta: ");
}

void gioca_partita() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1 = '\0', risposta2 = '\0';

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    printf("Domanda numero 1:\n");
    printf("Qual è la capitale della Polonia?\n");
    printf("A >>> Berlino\nB >>> Varsavia\nC >>> Lisbona\n");
    printf("Inserisci la risposta: ");
    scanf(" %c", &risposta1);

    if (risposta1 == 'B' || risposta1 == 'b') {
        punteggio++;
    }

    printf("Domanda numero 2:\n");
    printf("Nell'800 Carlo Magno?\n");
    printf("A >>> fu incoronato Imperatore a Roma\nB >>> Divenne re dei Franchi\nC >>> Conquistò il regno Longobardo\n");
    printf("Inserisci la risposta: ");
    scanf(" %c", &risposta2);

    if (risposta2 == 'A' || risposta2 == 'a') {
        punteggio++;
    }

    printf("Partita finita, punteggio totalizzato da %s: %d\n", nome, punteggio);
}