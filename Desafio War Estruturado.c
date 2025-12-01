#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char continente[20];
    char dono[20];
    int tropas;
};

struct Carta {
    char territorio[30];
    char tipo[20];
};

int main() {

    struct Territorio territorios[5];
    struct Carta cartas[5];

    printf("=== Cadastro de Territorios ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", territorios[i].nome);

        printf("Continente: ");
        scanf("%s", territorios[i].continente);

        printf("Dono: ");
        scanf("%s", territorios[i].dono);

        printf("Tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    printf("\n=== Cadastro de Cartas ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nCarta %d:\n", i + 1);

        printf("Nome do Territorio: ");
        scanf("%s", cartas[i].territorio);

        printf("Tipo (Infantaria/Cavalaria/Artilharia): ");
        scanf("%s", cartas[i].tipo);
    }

    printf("\n=== Territorios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\n%s | %s | %s | %d tropas\n",
               territorios[i].nome,
               territorios[i].continente,
               territorios[i].dono,
               territorios[i].tropas);
    }

    printf("\n=== Cartas Cadastradas ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nCarta %d: %s - %s\n",
               i + 1,
               cartas[i].territorio,
               cartas[i].tipo);
    }

    return 0;
}
