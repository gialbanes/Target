#include <stdio.h>

void inverterString(char str[]) {
    int inicio = 0;
    int fim = 0;
    char temp;

    // Encontrar o comprimento da string
    while (str[fim] != '\0') {
        fim++;
    }
    // Ajustar o índice do fim para o último caractere
    fim--;

    // Trocar caracteres do início e do fim
    while (inicio < fim) {
        // Trocar caracteres
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Mover os índices
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remover o caractere de nova linha, se presente
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    inverterString(str);
    printf("String invertida: %s\n", str);

    return 0;
}
