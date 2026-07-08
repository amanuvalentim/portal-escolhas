#include <stdio.h>

int main() {
    char nome[45];
    int classe, vida = 0, mana = 0, ataque = 0;

    printf("Ola! Voce esta no Portal das Escolhas!\nDigite seu nome: ");
    scanf("%44s", nome);

    printf("\nBem-vindo(a) ao Reino de Eldoria, %s!\n", nome);

    do {
        printf("Escolha sua classe:\n");
        printf(" 1 - Guerreiro\n");
        printf(" 2 - Mago\n");
        printf(" 3 - Arqueiro\n");
        printf(" 4 - Curandeiro\n");
        printf(" 5 - Druida\n");
        printf(" 6 - Ladino\n\n");

        scanf("%d", &classe);

        if (classe < 1 || classe > 6) {
            printf("Opcao invalida! Tente novamente.\n\n");
        }

    } while (classe < 1 || classe > 6);

    switch (classe) {
        case 1:
            printf("\nOpcao escolhida: 1\nVoce escolheu guerreiro!\n");
            break;

        case 2:
            printf("\nOpcao escolhida: 2\nVoce escolheu mago!\n");
            break;

        case 3:
            printf("\nOpcao escolhida: 3\nVoce escolheu arqueiro!\n");
            break;

        case 4:
            printf("\nOpcao escolhida: 4\nVoce escolheu curandeiro!\n");
            break;

        case 5:
            printf("\nOpcao escolhida: 5\nVoce escolheu druida!\n");
            break;

        case 6:
            printf("\nOpcao escolhida: 6\nVoce escolheu ladino!\n");
            break;

        default:
            printf("\nOpcao invalida! Tente novamente!\n");
            break;
    }

    if (classe == 1) {
        vida = 120;
        ataque = 80;
        mana = 20;
    } else if (classe == 2) {
        vida = 80;
        ataque = 100;
        mana = 120;
    } else if (classe == 3) {
        vida = 100;
        ataque = 90;
        mana = 50;
    } else if (classe == 4) {
        vida = 100;
        ataque = 50;
        mana = 90;
    } else if (classe == 5) {
        vida = 120;
        ataque = 100;
        mana = 120;
    } else if (classe == 6) {
        vida = 90;
        ataque = 110;
        mana = 50;
    } else {
        printf("Voce nao atribuiu nenhum atributo.\n");
    }

    printf("\nSEUS ATRIBUTOS SAO:\n");
    printf("Vida: %d\n", vida);
    printf("Ataque: %d\n", ataque);
    printf("Mana: %d\n", mana);

    return 0;
}