// circulo.h

// Verifica se a constante CIRCULO_H já foi definida
#ifndef CIRCULO_H
// Se não, define a constante CIRCULO_H para prevenir múltiplas inclusões do arquivo
#define CIRCULO_H

// Define um tipo Circulo
typedef struct Circulo Circulo;

// Protótipos de funções para o TAD Circulo

/**
 * Cria um círculo com centro (x,y) e raio r.
 * @param x A coordenada x do centro do círculo.
 * @param y A coordenada y do centro do círculo.
 * @param r O raio do círculo.
 * @return Retorna um ponteiro para o círculo criado.
 */
Circulo* circ_cria(float x, float y, float r);

/**
 * Libera a memória de um Circulo.
 * @param c Um ponteiro para o Circulo a ser liberado.
 */
void circ_libera(Circulo* c);

/**
 * Calcula a área de um círculo.
 * @param c Um ponteiro para o Circulo cuja área será calculada.
 * @return Retorna a área do círculo.
 */
float circ_area(Circulo* c);

/**
 * Verifica se dois círculos têm o mesmo centro.
 * @param c1 Um ponteiro para o primeiro Circulo.
 * @param c2 Um ponteiro para o segundo Circulo.
 * @return Retorna 1 se os círculos têm o mesmo centro, e 0 caso contrário.
 */
int circ_concentricos(Circulo* c1, Circulo* c2);

/**
 * Obtém o raio de um círculo.
 * @param c Um ponteiro para o Circulo cujo raio será obtido.
 * @return Retorna o raio do círculo.
 */
float circ_raio(Circulo* c);

// Encerra o bloco de prevenção de inclusão múltipla
#endif // CIRCULO_H
