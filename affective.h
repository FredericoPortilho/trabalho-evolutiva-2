
#ifndef EVOLUTIONARY_COMPUTATION_AFFECTIVE_H
#define EVOLUTIONARY_COMPUTATION_AFFECTIVE_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>

class affective {
public:
    // Evolutionary Algorithm
    affective(size_t n);
    void disp();
    bool is_minimization() { return false; };
    void divideNota(double arousal, int duracao);

    // Problem-specific
    size_t size();
    //std::pair <pitch, duracao> nota(size_t i);

    double getArousal(){
        return this->arousal;
    }

    double getValencia(){
        return this->valencia;
    }


    int getNumeroCompassos(){
        return this->numeroCompassos;
    }

    std::vector<int> _notas;
    size_t qtdNotas;

private:
    int numeroCompassos;
    static std::default_random_engine _generator;
    double valencia;
    double arousal;
    double chanceDividir;
};


#endif //EVOLUTIONARY_COMPUTATION_AFFECTIVE_H


