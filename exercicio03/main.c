#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct faturamentoDiario {
    int dia;
    double valor;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct faturamentoDiario faturamento[] = {
        {1, 22174.1664}, {2, 24537.6698}, {3, 26139.6134}, {4, 0.0}, {5, 0.0},
        {6, 26742.6612}, {7, 0.0}, {8, 42889.2258}, {9, 46251.174}, {10, 11191.4722},
        {11, 0.0}, {12, 0.0}, {13, 3847.4823}, {14, 373.7838}, {15, 2659.7563},
        {16, 48924.2448}, {17, 18419.2614}, {18, 0.0}, {19, 0.0}, {20, 35240.1826},
        {21, 43829.1667}, {22, 18235.6852}, {23, 4355.0662}, {24, 13327.1025},
        {25, 0.0}, {26, 0.0}, {27, 25681.8318}, {28, 1718.1221}, {29, 13220.495}, {30, 8414.61}};

    double menorFaturamento = faturamento[0].valor, maiorFaturamento = faturamento[0].valor, soma = 0.0, mediaMensal;
    int numDias = 30, diasCFaturamento = 0, diasAcimaMedia = 0;

    //calculando o maior e menor faturamento
    for(int i=0; i<numDias; i++){
        if(faturamento[i].valor > maiorFaturamento){
            maiorFaturamento = faturamento[i].valor;
        }
        if(faturamento[i].valor < menorFaturamento && faturamento[i].valor > 0.0){
            menorFaturamento = faturamento[i].valor;
        }
        if(faturamento[i].valor > 0.0){
            soma += faturamento[i].valor;
            diasCFaturamento;
        }
    }

    //calculando a média mensal
    mediaMensal = diasCFaturamento > 0 ? soma / diasCFaturamento : 0.0;

    //calculando quantos dias o faturamento foi maior que a média mensal
    for(int i=0; i<numDias; i++){
        if(faturamento[i].valor > mediaMensal){
            diasAcimaMedia++;
        }
    }

    printf("Menor faturamento do mês: %.2lf\n", menorFaturamento);
    printf("Maior faturamento do mês: %.2lf\n", maiorFaturamento);
     printf("Número de dias em que foi ultrapassado a média mensal: %d\n", diasAcimaMedia);


    return 0;
}
