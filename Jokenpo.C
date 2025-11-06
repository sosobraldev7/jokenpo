#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

    int jogador,computador;

    int main(){

    setlocale(LC_ALL, "português");
        srand(time(NULL));
    printf("------------------\n");
        printf("1 - PEDRA 🪨\n");
        printf("2 - PAPEL 📄\n");
        printf("3 - TESOURA ✂️\n");
    printf("------------------\n");
        printf("Escolha uma opção: ");
        scanf("%d", &jogador);

    switch(jogador){
        
        case 1:
            system("cls");
        printf("Você escolheu PERDA 🪨\n");
            break;
        
        case 2: 
            system("cls");
        printf("Você escolheu PAPEL 📄\n");
            break;

        case 3: 
            system("cls");
        printf("Você escolheu TESOURA ✂️\n");
            break;
        
        default:
                system("cls");
            printf("[ERRO404] Opção inválida...");
                system("pause");
        }

            computador = rand()% 3 + 1;

        switch(computador){

            case 1:
                system("cls");
            printf("Computador escolheu PEDRA 🪨\n");
                break;

            case 2:
                system("cls");
            printf("Computador escolheu PAPEL 📄\n");
                break;

            case 3:
                system("cls");
            printf("Computador escolheu TESOURA ✂️\n");
                break;
        }

        printf("--------------------------\n");

        if(jogador == computador){
            printf("Empate 🤝!\n");
        }
        else if ((jogador == 1 && computador == 3) ||
                (jogador ==  2  &&  computador == 2) ||
                (jogador == 3 && computador == 1)) {
            printf("PARABÉNS VOCÊ GANHOU 🎉🎉🎉!\n");
                }

        else {
            printf("Computador VENCEU 💻! tente novamente\n");
        }

                system("pause");
                    return 0;
    }