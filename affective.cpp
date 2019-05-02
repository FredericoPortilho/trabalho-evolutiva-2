#include "affective.h"

std::default_random_engine affective::_generator = std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count());

affective::affective(size_t n)
        : _notas(0, 0),arousal(0), valencia(0), numeroCompassos(n), qtdNotas(n)
{
    //define o problema a ser resolvido
    //std::uniform_int_distribution<int> pitch(0, 15);
    //std::uniform_int_distribution<int> duration(0, 7);
    std::uniform_real_distribution<double> d(-1, 1);
    //std::uniform_real_distribution<int> duracao(0, 5);

    //std::uniform_real_distribution<double> compasso(2, 4);



    this->arousal = d(this->_generator);
    this->valencia = d(this->_generator);

    //this->arousal =1;
    //this->valencia =1;

}


void affective::disp() {

    std::cout << "Problem" << std::endl;

    std::cout << "Valencia: " << this->valencia << "\t";
    std::cout << "Arousal: " << this->arousal << "\n\n";
    int compasso=0;
    /*
    std::cout << "---Estrutura Melodia---" << "\n";
    for(int i=0; i<_notas.size(); ++i){
        std::cout  << this->_notas[i] << " ";
        compasso += _notas[i];
        if(compasso == 16){
            compasso =0;
            std::cout << "\n";
        }
    }*/
    std::cout << "----------------------------------------------------\n";

}


size_t affective::size() {
    return this->numeroCompassos;
}


/*
int affective::nota(size_t i) {
    return this->_notas[i];
}*/

