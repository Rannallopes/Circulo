#include <stdio.h>
#include "circulo.h"

int main() {
    // Criando um círculo com centro (2, 3) e raio 5
    Circulo* meuCirculo = circ_cria(2, 3, 5);

    // Calculando a área do círculo
    float area = circ_area(meuCirculo);
    printf("Área do círculo: %.2f\n", area);

    // Verificando se dois círculos têm o mesmo centro
    Circulo* outroCirculo = circ_cria(2, 3, 8);
    int concentricos = circ_concentricos(meuCirculo, outroCirculo);
    printf("Os círculos são concentricos? %s\n", concentricos ? "Sim" : "Não");

    // Obtendo o raio do círculo
    float raio = circ_raio(meuCirculo);
    printf("Raio do círculo: %.2f\n", raio);

    // Liberando a memória dos círculos
    circ_libera(meuCirculo);
    circ_libera(outroCirculo);
    printf("Memória liberada\n");
    return 0;
}


