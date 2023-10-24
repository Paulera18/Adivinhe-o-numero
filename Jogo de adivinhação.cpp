#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //imprime cabecalho do jogo


    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinha��o!\n");
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
        printf("Qual � o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
            continue;
        }

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou) {
        printf("Parab�ns! Voc� acertou!\n");
        printf("Jogue de novo, voc� � um bom jogador!\n");

        break;
    }

            else if(maior) {
                printf("Seu chute foi maior que o n�mero secreto\n");
            }

            else {
                printf("Seu chute foi menor que o n�mero secreto\n");
            }

            tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / (double)2;
            pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");
        printf("Voc� acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
//%.1f o ponto um indica a quantidade de casas decimais
    }



