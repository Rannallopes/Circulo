
#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846

// Definição da estrutura do círculo
struct Circulo {
    float x; // Coordenada x do centro
    float y; // Coordenada y do centro
    float raio; // Raio do círculo
};

// Função para criar um círculo
Circulo* circ_cria(float x, float y, float r) {
    Circulo* novoCirculo = (Circulo*)malloc(sizeof(Circulo));
    if (novoCirculo != NULL) {
        novoCirculo->x = x;
        novoCirculo->y = y;
        novoCirculo->raio = r;
    }
    return novoCirculo;
}

// Função para liberar a memória de um círculo
void circ_libera(Circulo* c) {
    free(c);
}

// Função para calcular a área de um círculo
float circ_area(Circulo* c) {
    return M_PI * c->raio * c->raio;
}

// Função para verificar se dois círculos têm o mesmo centro
int circ_concentricos(Circulo* c1, Circulo* c2) {
    return (c1->x == c2->x) && (c1->y == c2->y);
}

// Função para obter o raio de um círculo
float circ_raio(Circulo* c) {
    return c->raio;
}

