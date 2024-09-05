#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, fib1=0, fib2=1, fibonacci=0;

    printf("Digite um n�mero qualquer:");
    scanf("%d", &numero);

    if(numero == 0 || numero == 1){ //verifica��o, pois a sequ�ncia inicia com 0 e 1
        printf("O n�mero digitado pertence � sequ�ncia de Fibonacci!");
        return 0;
    }

    while(fibonacci<numero){
        fibonacci = fib1 + fib2; //pr�ximo n�mero
        fib1 = fib2; //atualiza o fib1
        fib2 = fibonacci; //atualiza o fib2
    }

    if(fibonacci == numero){
        printf("O n�mero digitado pertence � sequ�ncia de Fibonacci!");
    } else {
        printf("O n�mero n�o pertece � sequ�ncia!");
    }

    return 0;
}
