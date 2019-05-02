
#ifndef EVOLUTIONARY_COMPUTATION_MELODIA_H
#define EVOLUTIONARY_COMPUTATION_MELODIA_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>

#include "affective.h"

class melodia {
public:
    melodia(affective &p);
    melodia(affective &p, std::vector<int> &tamanhoFilho);
    melodia(affective &p, int filho);
    int tamanhoMelodia();
    void disp(affective &p);
    int evaluate(affective &p);
    void mutation(affective &p, double mutation_strength);
    void divideNota(double arousal, int duracao, int i);
    void divideNota(double arousal, int duracao, int i, int qtdNotasMelodia);

    double distance(affective &p, melodia &rhs, double max_dist = std::numeric_limits<double>::max());

    melodia crossover(affective &p, melodia& rhs);
    double fx;
    double fitness;

    int MENOR_NOTA = 0;
    int MAIOR_NOTA = 15;

    // pares de nota e duracao 16 8 4 2 1
    std::vector<std::vector<std::pair <int, int> > >_melodia;

private:
    int qtdNotasMelodia;

    int filho;
    std::vector<int> tamanhoFilho;
    double chanceDividir;
    // size_t qtdNotas;
    static std::default_random_engine _generator;
};


#endif //EVOLUTIONARY_COMPUTATION_MELODIA_H


