#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //imprime cabecalho do jogo


    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

//em relacao sempre com os segundos do computador, por isso
//sempre diferente
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
//double variavel que suporta casa decimais
    
		while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");

        break;
    }

            else if(maior) {
                printf("Seu chute foi maior que o número secreto\n");
            }

            else {
                printf("Seu chute foi menor que o número secreto\n");
            }

            tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
//%.1f o ponto um indica a quantidade de casas decimais
    }



