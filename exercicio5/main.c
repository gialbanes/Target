#include <stdio.h>

void inverterString(char str[]) {
    int inicio = 0;
    int fim = 0;
    char temp;

    //encontrando o tamanho da palavra
    while (str[fim] != '\0') {
        fim++;
    }
    //ajustando para o último caractere
    fim--;

    //invertendoos caracteres do início e fim
    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    inverterString(str);
    printf("String invertida: %s", str);

    return 0;
}
