#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, fib1=0, fib2=1, fibonacci=0;

    printf("Digite um número qualquer:");
    scanf("%d", &numero);

    if(numero == 0 || numero == 1){ //verificação, pois a sequência inicia com 0 e 1
        printf("O número digitado pertence à sequência de Fibonacci!");
        return 0;
    }

    while(fibonacci<numero){
        fibonacci = fib1 + fib2; //próximo número
        fib1 = fib2; //atualiza o fib1
        fib2 = fibonacci; //atualiza o fib2
    }

    if(fibonacci == numero){
        printf("O número digitado pertence à sequência de Fibonacci!");
    } else {
        printf("O número não pertece à sequência!");
    }

    return 0;
}
