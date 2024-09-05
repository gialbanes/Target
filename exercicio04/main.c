#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct faturamentoMensal {
    char estado[10];
    double valor;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct faturamentoMensal faturamento[] = {
        {"SP", 67836.43}, {"RJ", 36678.66}, {"MG", 29229.88}, {"ES", 27165.48}, {"Outros", 19849.53}};

        int numeroEstados = sizeof(faturamento) / sizeof(faturamento[0]);
        double percentualPorEstado, valorTotalMensal=0.0;

        for(int i=0; i<numeroEstados; i++){
            valorTotalMensal += faturamento[i].valor;
        }

        for(int i=0; i<numeroEstados; i++){
            percentualPorEstado = (faturamento[i].valor / valorTotalMensal) * 100;
            printf("Percentual de %s: %.2lf%%\n", faturamento[i].estado, percentualPorEstado);
        }

    return 0;
}
