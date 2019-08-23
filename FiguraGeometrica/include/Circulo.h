#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica
{
    public:
        Circulo();
        float calculaArea();
        std::string getNome();
        void setNome(std::string);
        void setRaio(float raio);

    private:
        float raio;
};

#endif // CIRCULO_H
